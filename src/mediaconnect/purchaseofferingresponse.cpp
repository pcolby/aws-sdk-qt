// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purchaseofferingresponse.h"
#include "purchaseofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::PurchaseOfferingResponse
 * \brief The PurchaseOfferingResponse class provides an interace for MediaConnect PurchaseOffering responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::purchaseOffering
 */

/*!
 * Constructs a PurchaseOfferingResponse object for \a reply to \a request, with parent \a parent.
 */
PurchaseOfferingResponse::PurchaseOfferingResponse(
        const PurchaseOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new PurchaseOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseOfferingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PurchaseOfferingRequest * PurchaseOfferingResponse::request() const
{
    Q_D(const PurchaseOfferingResponse);
    return static_cast<const PurchaseOfferingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect PurchaseOffering \a response.
 */
void PurchaseOfferingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PurchaseOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::PurchaseOfferingResponsePrivate
 * \brief The PurchaseOfferingResponsePrivate class provides private implementation for PurchaseOfferingResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a PurchaseOfferingResponsePrivate object with public implementation \a q.
 */
PurchaseOfferingResponsePrivate::PurchaseOfferingResponsePrivate(
    PurchaseOfferingResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect PurchaseOffering response element from \a xml.
 */
void PurchaseOfferingResponsePrivate::parsePurchaseOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseOfferingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
