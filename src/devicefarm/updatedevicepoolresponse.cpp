// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicepoolresponse.h"
#include "updatedevicepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDevicePoolResponse
 * \brief The UpdateDevicePoolResponse class provides an interace for DeviceFarm UpdateDevicePool responses.
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
 * \sa DeviceFarmClient::updateDevicePool
 */

/*!
 * Constructs a UpdateDevicePoolResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDevicePoolResponse::UpdateDevicePoolResponse(
        const UpdateDevicePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateDevicePoolResponsePrivate(this), parent)
{
    setRequest(new UpdateDevicePoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDevicePoolRequest * UpdateDevicePoolResponse::request() const
{
    Q_D(const UpdateDevicePoolResponse);
    return static_cast<const UpdateDevicePoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateDevicePool \a response.
 */
void UpdateDevicePoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDevicePoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateDevicePoolResponsePrivate
 * \brief The UpdateDevicePoolResponsePrivate class provides private implementation for UpdateDevicePoolResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateDevicePoolResponsePrivate object with public implementation \a q.
 */
UpdateDevicePoolResponsePrivate::UpdateDevicePoolResponsePrivate(
    UpdateDevicePoolResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateDevicePool response element from \a xml.
 */
void UpdateDevicePoolResponsePrivate::parseUpdateDevicePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevicePoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
