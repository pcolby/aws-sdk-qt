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

#include "getschemaversionsdiffresponse.h"
#include "getschemaversionsdiffresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaVersionsDiffResponse
 * \brief The GetSchemaVersionsDiffResponse class provides an interace for Glue GetSchemaVersionsDiff responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getSchemaVersionsDiff
 */

/*!
 * Constructs a GetSchemaVersionsDiffResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaVersionsDiffResponse::GetSchemaVersionsDiffResponse(
        const GetSchemaVersionsDiffRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSchemaVersionsDiffResponsePrivate(this), parent)
{
    setRequest(new GetSchemaVersionsDiffRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaVersionsDiffRequest * GetSchemaVersionsDiffResponse::request() const
{
    return static_cast<const GetSchemaVersionsDiffRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetSchemaVersionsDiff \a response.
 */
void GetSchemaVersionsDiffResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaVersionsDiffResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSchemaVersionsDiffResponsePrivate
 * \brief The GetSchemaVersionsDiffResponsePrivate class provides private implementation for GetSchemaVersionsDiffResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaVersionsDiffResponsePrivate object with public implementation \a q.
 */
GetSchemaVersionsDiffResponsePrivate::GetSchemaVersionsDiffResponsePrivate(
    GetSchemaVersionsDiffResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSchemaVersionsDiff response element from \a xml.
 */
void GetSchemaVersionsDiffResponsePrivate::parseGetSchemaVersionsDiffResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaVersionsDiffResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
