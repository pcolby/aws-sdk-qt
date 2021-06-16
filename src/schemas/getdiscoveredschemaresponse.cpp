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

#include "getdiscoveredschemaresponse.h"
#include "getdiscoveredschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::GetDiscoveredSchemaResponse
 * \brief The GetDiscoveredSchemaResponse class provides an interace for Schemas GetDiscoveredSchema responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::getDiscoveredSchema
 */

/*!
 * Constructs a GetDiscoveredSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
GetDiscoveredSchemaResponse::GetDiscoveredSchemaResponse(
        const GetDiscoveredSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new GetDiscoveredSchemaResponsePrivate(this), parent)
{
    setRequest(new GetDiscoveredSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDiscoveredSchemaRequest * GetDiscoveredSchemaResponse::request() const
{
    Q_D(const GetDiscoveredSchemaResponse);
    return static_cast<const GetDiscoveredSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas GetDiscoveredSchema \a response.
 */
void GetDiscoveredSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDiscoveredSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::GetDiscoveredSchemaResponsePrivate
 * \brief The GetDiscoveredSchemaResponsePrivate class provides private implementation for GetDiscoveredSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a GetDiscoveredSchemaResponsePrivate object with public implementation \a q.
 */
GetDiscoveredSchemaResponsePrivate::GetDiscoveredSchemaResponsePrivate(
    GetDiscoveredSchemaResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas GetDiscoveredSchema response element from \a xml.
 */
void GetDiscoveredSchemaResponsePrivate::parseGetDiscoveredSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiscoveredSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
