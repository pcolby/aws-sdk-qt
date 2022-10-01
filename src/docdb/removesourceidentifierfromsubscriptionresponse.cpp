// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removesourceidentifierfromsubscriptionresponse.h"
#include "removesourceidentifierfromsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RemoveSourceIdentifierFromSubscriptionResponse
 * \brief The RemoveSourceIdentifierFromSubscriptionResponse class provides an interace for DocDb RemoveSourceIdentifierFromSubscription responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::removeSourceIdentifierFromSubscription
 */

/*!
 * Constructs a RemoveSourceIdentifierFromSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveSourceIdentifierFromSubscriptionResponse::RemoveSourceIdentifierFromSubscriptionResponse(
        const RemoveSourceIdentifierFromSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new RemoveSourceIdentifierFromSubscriptionResponsePrivate(this), parent)
{
    setRequest(new RemoveSourceIdentifierFromSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveSourceIdentifierFromSubscriptionRequest * RemoveSourceIdentifierFromSubscriptionResponse::request() const
{
    Q_D(const RemoveSourceIdentifierFromSubscriptionResponse);
    return static_cast<const RemoveSourceIdentifierFromSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb RemoveSourceIdentifierFromSubscription \a response.
 */
void RemoveSourceIdentifierFromSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveSourceIdentifierFromSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::RemoveSourceIdentifierFromSubscriptionResponsePrivate
 * \brief The RemoveSourceIdentifierFromSubscriptionResponsePrivate class provides private implementation for RemoveSourceIdentifierFromSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RemoveSourceIdentifierFromSubscriptionResponsePrivate object with public implementation \a q.
 */
RemoveSourceIdentifierFromSubscriptionResponsePrivate::RemoveSourceIdentifierFromSubscriptionResponsePrivate(
    RemoveSourceIdentifierFromSubscriptionResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb RemoveSourceIdentifierFromSubscription response element from \a xml.
 */
void RemoveSourceIdentifierFromSubscriptionResponsePrivate::parseRemoveSourceIdentifierFromSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveSourceIdentifierFromSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
