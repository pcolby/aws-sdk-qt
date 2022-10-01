// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purchaseofferingresponse.h"
#include "purchaseofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::PurchaseOfferingResponse
 * \brief The PurchaseOfferingResponse class provides an interace for DeviceFarm PurchaseOffering responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::purchaseOffering
 */

/*!
 * Constructs a PurchaseOfferingResponse object for \a reply to \a request, with parent \a parent.
 */
PurchaseOfferingResponse::PurchaseOfferingResponse(
        const PurchaseOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new PurchaseOfferingResponsePrivate(this), parent)
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
 * Parses a successful DeviceFarm PurchaseOffering \a response.
 */
void PurchaseOfferingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PurchaseOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::PurchaseOfferingResponsePrivate
 * \brief The PurchaseOfferingResponsePrivate class provides private implementation for PurchaseOfferingResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a PurchaseOfferingResponsePrivate object with public implementation \a q.
 */
PurchaseOfferingResponsePrivate::PurchaseOfferingResponsePrivate(
    PurchaseOfferingResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm PurchaseOffering response element from \a xml.
 */
void PurchaseOfferingResponsePrivate::parsePurchaseOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseOfferingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
