// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedeviceinstanceresponse.h"
#include "updatedeviceinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDeviceInstanceResponse
 * \brief The UpdateDeviceInstanceResponse class provides an interace for DeviceFarm UpdateDeviceInstance responses.
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
 * \sa DeviceFarmClient::updateDeviceInstance
 */

/*!
 * Constructs a UpdateDeviceInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceInstanceResponse::UpdateDeviceInstanceResponse(
        const UpdateDeviceInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateDeviceInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceInstanceRequest * UpdateDeviceInstanceResponse::request() const
{
    Q_D(const UpdateDeviceInstanceResponse);
    return static_cast<const UpdateDeviceInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateDeviceInstance \a response.
 */
void UpdateDeviceInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateDeviceInstanceResponsePrivate
 * \brief The UpdateDeviceInstanceResponsePrivate class provides private implementation for UpdateDeviceInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateDeviceInstanceResponsePrivate object with public implementation \a q.
 */
UpdateDeviceInstanceResponsePrivate::UpdateDeviceInstanceResponsePrivate(
    UpdateDeviceInstanceResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateDeviceInstance response element from \a xml.
 */
void UpdateDeviceInstanceResponsePrivate::parseUpdateDeviceInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
