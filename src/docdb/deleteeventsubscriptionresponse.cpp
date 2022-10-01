// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventsubscriptionresponse.h"
#include "deleteeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteEventSubscriptionResponse
 * \brief The DeleteEventSubscriptionResponse class provides an interace for DocDb DeleteEventSubscription responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteEventSubscription
 */

/*!
 * Constructs a DeleteEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventSubscriptionResponse::DeleteEventSubscriptionResponse(
        const DeleteEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventSubscriptionRequest * DeleteEventSubscriptionResponse::request() const
{
    Q_D(const DeleteEventSubscriptionResponse);
    return static_cast<const DeleteEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteEventSubscription \a response.
 */
void DeleteEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteEventSubscriptionResponsePrivate
 * \brief The DeleteEventSubscriptionResponsePrivate class provides private implementation for DeleteEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteEventSubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteEventSubscriptionResponsePrivate::DeleteEventSubscriptionResponsePrivate(
    DeleteEventSubscriptionResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteEventSubscription response element from \a xml.
 */
void DeleteEventSubscriptionResponsePrivate::parseDeleteEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
