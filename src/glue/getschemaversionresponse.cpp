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

#include "getschemaversionresponse.h"
#include "getschemaversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaVersionResponse
 * \brief The GetSchemaVersionResponse class provides an interace for Glue GetSchemaVersion responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchemaVersion
 */

/*!
 * Constructs a GetSchemaVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaVersionResponse::GetSchemaVersionResponse(
        const GetSchemaVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSchemaVersionResponsePrivate(this), parent)
{
    setRequest(new GetSchemaVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaVersionRequest * GetSchemaVersionResponse::request() const
{
    Q_D(const GetSchemaVersionResponse);
    return static_cast<const GetSchemaVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSchemaVersion \a response.
 */
void GetSchemaVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSchemaVersionResponsePrivate
 * \brief The GetSchemaVersionResponsePrivate class provides private implementation for GetSchemaVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaVersionResponsePrivate object with public implementation \a q.
 */
GetSchemaVersionResponsePrivate::GetSchemaVersionResponsePrivate(
    GetSchemaVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSchemaVersion response element from \a xml.
 */
void GetSchemaVersionResponsePrivate::parseGetSchemaVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
