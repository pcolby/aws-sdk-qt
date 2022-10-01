// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicepoolcompatibilityresponse.h"
#include "getdevicepoolcompatibilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityResponse
 * \brief The GetDevicePoolCompatibilityResponse class provides an interace for DeviceFarm GetDevicePoolCompatibility responses.
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
 * \sa DeviceFarmClient::getDevicePoolCompatibility
 */

/*!
 * Constructs a GetDevicePoolCompatibilityResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicePoolCompatibilityResponse::GetDevicePoolCompatibilityResponse(
        const GetDevicePoolCompatibilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDevicePoolCompatibilityResponsePrivate(this), parent)
{
    setRequest(new GetDevicePoolCompatibilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicePoolCompatibilityRequest * GetDevicePoolCompatibilityResponse::request() const
{
    Q_D(const GetDevicePoolCompatibilityResponse);
    return static_cast<const GetDevicePoolCompatibilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetDevicePoolCompatibility \a response.
 */
void GetDevicePoolCompatibilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicePoolCompatibilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityResponsePrivate
 * \brief The GetDevicePoolCompatibilityResponsePrivate class provides private implementation for GetDevicePoolCompatibilityResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDevicePoolCompatibilityResponsePrivate object with public implementation \a q.
 */
GetDevicePoolCompatibilityResponsePrivate::GetDevicePoolCompatibilityResponsePrivate(
    GetDevicePoolCompatibilityResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetDevicePoolCompatibility response element from \a xml.
 */
void GetDevicePoolCompatibilityResponsePrivate::parseGetDevicePoolCompatibilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePoolCompatibilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
