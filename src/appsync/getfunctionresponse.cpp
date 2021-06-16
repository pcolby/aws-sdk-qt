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

#include "getfunctionresponse.h"
#include "getfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetFunctionResponse
 * \brief The GetFunctionResponse class provides an interace for AppSync GetFunction responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getFunction
 */

/*!
 * Constructs a GetFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionResponse::GetFunctionResponse(
        const GetFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetFunctionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionRequest * GetFunctionResponse::request() const
{
    Q_D(const GetFunctionResponse);
    return static_cast<const GetFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetFunction \a response.
 */
void GetFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetFunctionResponsePrivate
 * \brief The GetFunctionResponsePrivate class provides private implementation for GetFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetFunctionResponsePrivate object with public implementation \a q.
 */
GetFunctionResponsePrivate::GetFunctionResponsePrivate(
    GetFunctionResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetFunction response element from \a xml.
 */
void GetFunctionResponsePrivate::parseGetFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
