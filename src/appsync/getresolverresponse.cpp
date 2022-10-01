// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresolverresponse.h"
#include "getresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetResolverResponse
 * \brief The GetResolverResponse class provides an interace for AppSync GetResolver responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getResolver
 */

/*!
 * Constructs a GetResolverResponse object for \a reply to \a request, with parent \a parent.
 */
GetResolverResponse::GetResolverResponse(
        const GetResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetResolverResponsePrivate(this), parent)
{
    setRequest(new GetResolverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResolverRequest * GetResolverResponse::request() const
{
    Q_D(const GetResolverResponse);
    return static_cast<const GetResolverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetResolver \a response.
 */
void GetResolverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetResolverResponsePrivate
 * \brief The GetResolverResponsePrivate class provides private implementation for GetResolverResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetResolverResponsePrivate object with public implementation \a q.
 */
GetResolverResponsePrivate::GetResolverResponsePrivate(
    GetResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetResolver response element from \a xml.
 */
void GetResolverResponsePrivate::parseGetResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResolverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
