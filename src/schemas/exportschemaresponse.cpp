/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "exportschemaresponse.h"
#include "exportschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ExportSchemaResponse
 * \brief The ExportSchemaResponse class provides an interace for Schemas ExportSchema responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::exportSchema
 */

/*!
 * Constructs a ExportSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
ExportSchemaResponse::ExportSchemaResponse(
        const ExportSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new ExportSchemaResponsePrivate(this), parent)
{
    setRequest(new ExportSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportSchemaRequest * ExportSchemaResponse::request() const
{
    return static_cast<const ExportSchemaRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas ExportSchema \a response.
 */
void ExportSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::ExportSchemaResponsePrivate
 * \brief The ExportSchemaResponsePrivate class provides private implementation for ExportSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ExportSchemaResponsePrivate object with public implementation \a q.
 */
ExportSchemaResponsePrivate::ExportSchemaResponsePrivate(
    ExportSchemaResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas ExportSchema response element from \a xml.
 */
void ExportSchemaResponsePrivate::parseExportSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
