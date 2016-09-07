/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws-codegen.

    Libqtaws-codegen is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws-codegen is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QCoreApplication>
#include <QDebug>
#include <QDir>

#include "generator.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    const QStringList arguments = QCoreApplication::arguments();
    if (arguments.contains(QLatin1String("-h"))) {
        qInfo() << QString::fromLatin1("Usage: %1 [[input-dir-or-file ...] [output-dir]")
                   .arg(QCoreApplication::applicationName());
        return 0;
    }

    Generator generator((arguments.size() > 1) ? QDir(arguments.last()) : QDir::current());

    QStringList inputPaths = arguments;
    if (!inputPaths.isEmpty()) inputPaths.removeFirst();
    if (!inputPaths.isEmpty()) inputPaths.removeLast();
    if (inputPaths.isEmpty()) {
        #ifndef DEFAULT_API_DESCRIPTIONS_DIR
        #define DEFAULT_API_DESCRIPTIONS_DIR "api-descriptions"
        #endif
        inputPaths.append(DEFAULT_API_DESCRIPTIONS_DIR);
    }

    foreach (const QString &path, inputPaths) {
        const QFileInfo info(path);
        if (!info.isDir()) {
            return generator.addApiDescription(path);
        }

        const QDir dir(info.absoluteFilePath(), QLatin1String("*.json"),
                       QDir::Name|QDir::IgnoreCase, QDir::Files|QDir::Readable);
        foreach (const QFileInfo &entry, dir.entryInfoList()) {
            if (!generator.addApiDescription(entry.absoluteFilePath()))
                return false;
        }
    }

    return generator.generate() ? 0 : 1;
}
