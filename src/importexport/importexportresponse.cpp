/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "importexportresponse.h"
#include "importexportresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::ImportExportResponse
 * \brief The ImportExportResponse class provides an interface for ImportExport responses.
 *
 * \inmodule QtAwsImportExport
 */

/*!
 * Constructs a ImportExportResponse object with parent \a parent.
 */
ImportExportResponse::ImportExportResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ImportExportResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ImportExportResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ImportExportResponsePrivate.
 */
ImportExportResponse::ImportExportResponse(ImportExportResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ImportExportResponse::parseFailure(QIODevice &response)
{
    Q_D(ImportExportResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::ImportExport::ImportExportResponsePrivate
 * \brief The ImportExportResponsePrivate class provides private implementation for ImportExportResponse.
 * \internal
 *
 * \inmodule QtAwsImportExport
 */

/*!
 * Constructs a ImportExportResponsePrivate object with public implementation \a q.
 */
ImportExportResponsePrivate::ImportExportResponsePrivate(
    ImportExportResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ImportExport
} // namespace QtAws
