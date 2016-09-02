#include <QCoreApplication>
#include <QDebug>
#include <QDir>

bool processApiDescription(const QString &filename, const QDir &outputDir)
{
    qDebug() << "processing" << filename << outputDir.absolutePath();
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
    foreach (const QString &entry, dir.entryList()) {
        if (!processApiDescription(entry, outputDir))
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
    inputPaths.removeFirst();
    inputPaths.removeLast();
    if (inputPaths.isEmpty()) {
        inputPaths.append(QLatin1String("api-descriptions"));
    }

    const QDir outputDir = (arguments.size() > 1) ? QDir(arguments.last()) : QDir::current();

    return processInputPaths(inputPaths, outputDir) ? 0 : 1;
}
