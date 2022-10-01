// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
