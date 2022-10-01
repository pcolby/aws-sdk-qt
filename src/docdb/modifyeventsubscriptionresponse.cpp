// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyeventsubscriptionresponse.h"
#include "modifyeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyEventSubscriptionResponse
 * \brief The ModifyEventSubscriptionResponse class provides an interace for DocDb ModifyEventSubscription responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyEventSubscription
 */

/*!
 * Constructs a ModifyEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyEventSubscriptionResponse::ModifyEventSubscriptionResponse(
        const ModifyEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new ModifyEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyEventSubscriptionRequest * ModifyEventSubscriptionResponse::request() const
{
    Q_D(const ModifyEventSubscriptionResponse);
    return static_cast<const ModifyEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb ModifyEventSubscription \a response.
 */
void ModifyEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyEventSubscriptionResponsePrivate
 * \brief The ModifyEventSubscriptionResponsePrivate class provides private implementation for ModifyEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyEventSubscriptionResponsePrivate object with public implementation \a q.
 */
ModifyEventSubscriptionResponsePrivate::ModifyEventSubscriptionResponsePrivate(
    ModifyEventSubscriptionResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyEventSubscription response element from \a xml.
 */
void ModifyEventSubscriptionResponsePrivate::parseModifyEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
