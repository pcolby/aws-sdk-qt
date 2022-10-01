// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegraphqlapiresponse.h"
#include "deletegraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteGraphqlApiResponse
 * \brief The DeleteGraphqlApiResponse class provides an interace for AppSync DeleteGraphqlApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteGraphqlApi
 */

/*!
 * Constructs a DeleteGraphqlApiResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGraphqlApiResponse::DeleteGraphqlApiResponse(
        const DeleteGraphqlApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new DeleteGraphqlApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGraphqlApiRequest * DeleteGraphqlApiResponse::request() const
{
    Q_D(const DeleteGraphqlApiResponse);
    return static_cast<const DeleteGraphqlApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteGraphqlApi \a response.
 */
void DeleteGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGraphqlApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteGraphqlApiResponsePrivate
 * \brief The DeleteGraphqlApiResponsePrivate class provides private implementation for DeleteGraphqlApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteGraphqlApiResponsePrivate object with public implementation \a q.
 */
DeleteGraphqlApiResponsePrivate::DeleteGraphqlApiResponsePrivate(
    DeleteGraphqlApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteGraphqlApi response element from \a xml.
 */
void DeleteGraphqlApiResponsePrivate::parseDeleteGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGraphqlApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
