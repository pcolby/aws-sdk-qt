// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getofferingstatusresponse.h"
#include "getofferingstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetOfferingStatusResponse
 * \brief The GetOfferingStatusResponse class provides an interace for DeviceFarm GetOfferingStatus responses.
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
 * \sa DeviceFarmClient::getOfferingStatus
 */

/*!
 * Constructs a GetOfferingStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetOfferingStatusResponse::GetOfferingStatusResponse(
        const GetOfferingStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetOfferingStatusResponsePrivate(this), parent)
{
    setRequest(new GetOfferingStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOfferingStatusRequest * GetOfferingStatusResponse::request() const
{
    Q_D(const GetOfferingStatusResponse);
    return static_cast<const GetOfferingStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetOfferingStatus \a response.
 */
void GetOfferingStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOfferingStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetOfferingStatusResponsePrivate
 * \brief The GetOfferingStatusResponsePrivate class provides private implementation for GetOfferingStatusResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetOfferingStatusResponsePrivate object with public implementation \a q.
 */
GetOfferingStatusResponsePrivate::GetOfferingStatusResponsePrivate(
    GetOfferingStatusResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetOfferingStatus response element from \a xml.
 */
void GetOfferingStatusResponsePrivate::parseGetOfferingStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOfferingStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
