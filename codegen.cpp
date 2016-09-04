#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QJsonDocument>

bool processApiDescription(const QString &filename, const QDir &outputDir)
{
    qDebug() << "processing" << filename << outputDir.absolutePath();

    QFile file(filename);
    if (!file.open(QFile::ReadOnly)) {
        qWarning() << "failed to open file for reading" << filename;
        return false;
    }

    QJsonParseError error;
    const QJsonDocument json = QJsonDocument::fromJson(file.readAll(), &error);
    if (error.error != QJsonParseError::NoError) {
        qWarning() << "failed to parse JSON file" << filename << '-'
                   << error.errorString() << "at offset" << error.offset;
        return false;
    }

    return true;
}

bool processInputPath(const QString &path, const QDir &outputDir)
{
    const QFileInfo info(path);
    if (!info.isDir()) {
        return processApiDescription(path, outputDir);
    }

    const QDir dir(info.absoluteFilePath(), QLatin1String("*.json"),
                   QDir::Name|QDir::IgnoreCase, QDir::Files|QDir::Readable);
    foreach (const QFileInfo &entry, dir.entryInfoList()) {
        if (!processApiDescription(entry.absoluteFilePath(), outputDir))
            return false;
    }
    return true;
}

bool processInputPaths(const QStringList &paths, const QDir &outputDir)
{
    foreach (const QString &path, paths) {
        if (!processInputPath(path, outputDir))
            return false;
    }
    return true;
}

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    const QStringList arguments = QCoreApplication::arguments();
    if (arguments.contains(QLatin1String("-h"))) {
        qInfo() << QString::fromLatin1("Usage: %1 [[input-dir-or-file ...] [output-dir]")
                   .arg(QCoreApplication::applicationName());
        return 0;
    }

    QStringList inputPaths = arguments;
    if (!inputPaths.isEmpty()) inputPaths.removeFirst();
    if (!inputPaths.isEmpty()) inputPaths.removeLast();
    if (inputPaths.isEmpty()) {
        #ifndef DEFAULT_API_DESCRIPTIONS_DIR
        #define DEFAULT_API_DESCRIPTIONS_DIR "api-descriptions"
        #endif
        inputPaths.append(DEFAULT_API_DESCRIPTIONS_DIR);
    }

    const QDir outputDir = (arguments.size() > 1) ? QDir(arguments.last()) : QDir::current();

    return processInputPaths(inputPaths, outputDir) ? 0 : 1;
}
