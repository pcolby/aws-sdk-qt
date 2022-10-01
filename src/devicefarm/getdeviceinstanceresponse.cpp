// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeviceinstanceresponse.h"
#include "getdeviceinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceResponse
 * \brief The GetDeviceInstanceResponse class provides an interace for DeviceFarm GetDeviceInstance responses.
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
 * \sa DeviceFarmClient::getDeviceInstance
 */

/*!
 * Constructs a GetDeviceInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceInstanceResponse::GetDeviceInstanceResponse(
        const GetDeviceInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDeviceInstanceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceInstanceRequest * GetDeviceInstanceResponse::request() const
{
    Q_D(const GetDeviceInstanceResponse);
    return static_cast<const GetDeviceInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetDeviceInstance \a response.
 */
void GetDeviceInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceResponsePrivate
 * \brief The GetDeviceInstanceResponsePrivate class provides private implementation for GetDeviceInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDeviceInstanceResponsePrivate object with public implementation \a q.
 */
GetDeviceInstanceResponsePrivate::GetDeviceInstanceResponsePrivate(
    GetDeviceInstanceResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetDeviceInstance response element from \a xml.
 */
void GetDeviceInstanceResponsePrivate::parseGetDeviceInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
