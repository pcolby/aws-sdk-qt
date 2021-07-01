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

#include "getuserdefinedfunctionresponse.h"
#include "getuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionResponse
 * \brief The GetUserDefinedFunctionResponse class provides an interace for Glue GetUserDefinedFunction responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getUserDefinedFunction
 */

/*!
 * Constructs a GetUserDefinedFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserDefinedFunctionResponse::GetUserDefinedFunctionResponse(
        const GetUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new GetUserDefinedFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserDefinedFunctionRequest * GetUserDefinedFunctionResponse::request() const
{
    Q_D(const GetUserDefinedFunctionResponse);
    return static_cast<const GetUserDefinedFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUserDefinedFunction \a response.
 */
void GetUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionResponsePrivate
 * \brief The GetUserDefinedFunctionResponsePrivate class provides private implementation for GetUserDefinedFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUserDefinedFunctionResponsePrivate object with public implementation \a q.
 */
GetUserDefinedFunctionResponsePrivate::GetUserDefinedFunctionResponsePrivate(
    GetUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUserDefinedFunction response element from \a xml.
 */
void GetUserDefinedFunctionResponsePrivate::parseGetUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserDefinedFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
