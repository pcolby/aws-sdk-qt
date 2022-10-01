// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresolverresponse.h"
#include "deleteresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteResolverResponse
 * \brief The DeleteResolverResponse class provides an interace for AppSync DeleteResolver responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteResolver
 */

/*!
 * Constructs a DeleteResolverResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResolverResponse::DeleteResolverResponse(
        const DeleteResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteResolverResponsePrivate(this), parent)
{
    setRequest(new DeleteResolverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResolverRequest * DeleteResolverResponse::request() const
{
    Q_D(const DeleteResolverResponse);
    return static_cast<const DeleteResolverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteResolver \a response.
 */
void DeleteResolverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteResolverResponsePrivate
 * \brief The DeleteResolverResponsePrivate class provides private implementation for DeleteResolverResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteResolverResponsePrivate object with public implementation \a q.
 */
DeleteResolverResponsePrivate::DeleteResolverResponsePrivate(
    DeleteResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteResolver response element from \a xml.
 */
void DeleteResolverResponsePrivate::parseDeleteResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResolverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
