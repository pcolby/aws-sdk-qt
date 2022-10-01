// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listofferingpromotionsresponse.h"
#include "listofferingpromotionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListOfferingPromotionsResponse
 * \brief The ListOfferingPromotionsResponse class provides an interace for DeviceFarm ListOfferingPromotions responses.
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
 * \sa DeviceFarmClient::listOfferingPromotions
 */

/*!
 * Constructs a ListOfferingPromotionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOfferingPromotionsResponse::ListOfferingPromotionsResponse(
        const ListOfferingPromotionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListOfferingPromotionsResponsePrivate(this), parent)
{
    setRequest(new ListOfferingPromotionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOfferingPromotionsRequest * ListOfferingPromotionsResponse::request() const
{
    Q_D(const ListOfferingPromotionsResponse);
    return static_cast<const ListOfferingPromotionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListOfferingPromotions \a response.
 */
void ListOfferingPromotionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOfferingPromotionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListOfferingPromotionsResponsePrivate
 * \brief The ListOfferingPromotionsResponsePrivate class provides private implementation for ListOfferingPromotionsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListOfferingPromotionsResponsePrivate object with public implementation \a q.
 */
ListOfferingPromotionsResponsePrivate::ListOfferingPromotionsResponsePrivate(
    ListOfferingPromotionsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListOfferingPromotions response element from \a xml.
 */
void ListOfferingPromotionsResponsePrivate::parseListOfferingPromotionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOfferingPromotionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
