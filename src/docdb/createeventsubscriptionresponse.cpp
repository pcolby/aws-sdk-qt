// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createeventsubscriptionresponse.h"
#include "createeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateEventSubscriptionResponse
 * \brief The CreateEventSubscriptionResponse class provides an interace for DocDb CreateEventSubscription responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createEventSubscription
 */

/*!
 * Constructs a CreateEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEventSubscriptionResponse::CreateEventSubscriptionResponse(
        const CreateEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEventSubscriptionRequest * CreateEventSubscriptionResponse::request() const
{
    Q_D(const CreateEventSubscriptionResponse);
    return static_cast<const CreateEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CreateEventSubscription \a response.
 */
void CreateEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateEventSubscriptionResponsePrivate
 * \brief The CreateEventSubscriptionResponsePrivate class provides private implementation for CreateEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateEventSubscriptionResponsePrivate object with public implementation \a q.
 */
CreateEventSubscriptionResponsePrivate::CreateEventSubscriptionResponsePrivate(
    CreateEventSubscriptionResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateEventSubscription response element from \a xml.
 */
void CreateEventSubscriptionResponsePrivate::parseCreateEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
