/*
    Copyright 2013-2018 Paul Colby

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

#include "getuserdefinedfunctionsresponse.h"
#include "getuserdefinedfunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionsResponse
 * \brief The GetUserDefinedFunctionsResponse class provides an interace for Glue GetUserDefinedFunctions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getUserDefinedFunctions
 */

/*!
 * Constructs a GetUserDefinedFunctionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserDefinedFunctionsResponse::GetUserDefinedFunctionsResponse(
        const GetUserDefinedFunctionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUserDefinedFunctionsResponsePrivate(this), parent)
{
    setRequest(new GetUserDefinedFunctionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserDefinedFunctionsRequest * GetUserDefinedFunctionsResponse::request() const
{
    Q_D(const GetUserDefinedFunctionsResponse);
    return static_cast<const GetUserDefinedFunctionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUserDefinedFunctions \a response.
 */
void GetUserDefinedFunctionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserDefinedFunctionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionsResponsePrivate
 * \brief The GetUserDefinedFunctionsResponsePrivate class provides private implementation for GetUserDefinedFunctionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUserDefinedFunctionsResponsePrivate object with public implementation \a q.
 */
GetUserDefinedFunctionsResponsePrivate::GetUserDefinedFunctionsResponsePrivate(
    GetUserDefinedFunctionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUserDefinedFunctions response element from \a xml.
 */
void GetUserDefinedFunctionsResponsePrivate::parseGetUserDefinedFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserDefinedFunctionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
