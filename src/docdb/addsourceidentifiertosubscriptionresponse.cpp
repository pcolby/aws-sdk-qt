// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addsourceidentifiertosubscriptionresponse.h"
#include "addsourceidentifiertosubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::AddSourceIdentifierToSubscriptionResponse
 * \brief The AddSourceIdentifierToSubscriptionResponse class provides an interace for DocDb AddSourceIdentifierToSubscription responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::addSourceIdentifierToSubscription
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
AddSourceIdentifierToSubscriptionResponse::AddSourceIdentifierToSubscriptionResponse(
        const AddSourceIdentifierToSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new AddSourceIdentifierToSubscriptionResponsePrivate(this), parent)
{
    setRequest(new AddSourceIdentifierToSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddSourceIdentifierToSubscriptionRequest * AddSourceIdentifierToSubscriptionResponse::request() const
{
    Q_D(const AddSourceIdentifierToSubscriptionResponse);
    return static_cast<const AddSourceIdentifierToSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb AddSourceIdentifierToSubscription \a response.
 */
void AddSourceIdentifierToSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddSourceIdentifierToSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::AddSourceIdentifierToSubscriptionResponsePrivate
 * \brief The AddSourceIdentifierToSubscriptionResponsePrivate class provides private implementation for AddSourceIdentifierToSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionResponsePrivate object with public implementation \a q.
 */
AddSourceIdentifierToSubscriptionResponsePrivate::AddSourceIdentifierToSubscriptionResponsePrivate(
    AddSourceIdentifierToSubscriptionResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb AddSourceIdentifierToSubscription response element from \a xml.
 */
void AddSourceIdentifierToSubscriptionResponsePrivate::parseAddSourceIdentifierToSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddSourceIdentifierToSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
