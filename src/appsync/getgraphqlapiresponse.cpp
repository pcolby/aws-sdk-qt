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

#include "getgraphqlapiresponse.h"
#include "getgraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetGraphqlApiResponse
 * \brief The GetGraphqlApiResponse class provides an interace for AppSync GetGraphqlApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getGraphqlApi
 */

/*!
 * Constructs a GetGraphqlApiResponse object for \a reply to \a request, with parent \a parent.
 */
GetGraphqlApiResponse::GetGraphqlApiResponse(
        const GetGraphqlApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new GetGraphqlApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGraphqlApiRequest * GetGraphqlApiResponse::request() const
{
    Q_D(const GetGraphqlApiResponse);
    return static_cast<const GetGraphqlApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetGraphqlApi \a response.
 */
void GetGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGraphqlApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetGraphqlApiResponsePrivate
 * \brief The GetGraphqlApiResponsePrivate class provides private implementation for GetGraphqlApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetGraphqlApiResponsePrivate object with public implementation \a q.
 */
GetGraphqlApiResponsePrivate::GetGraphqlApiResponsePrivate(
    GetGraphqlApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetGraphqlApi response element from \a xml.
 */
void GetGraphqlApiResponsePrivate::parseGetGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGraphqlApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
