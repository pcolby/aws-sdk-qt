// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworkprofileresponse.h"
#include "updatenetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateNetworkProfileResponse
 * \brief The UpdateNetworkProfileResponse class provides an interace for DeviceFarm UpdateNetworkProfile responses.
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
 * \sa DeviceFarmClient::updateNetworkProfile
 */

/*!
 * Constructs a UpdateNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkProfileResponse::UpdateNetworkProfileResponse(
        const UpdateNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkProfileRequest * UpdateNetworkProfileResponse::request() const
{
    Q_D(const UpdateNetworkProfileResponse);
    return static_cast<const UpdateNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateNetworkProfile \a response.
 */
void UpdateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateNetworkProfileResponsePrivate
 * \brief The UpdateNetworkProfileResponsePrivate class provides private implementation for UpdateNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateNetworkProfileResponsePrivate object with public implementation \a q.
 */
UpdateNetworkProfileResponsePrivate::UpdateNetworkProfileResponsePrivate(
    UpdateNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateNetworkProfile response element from \a xml.
 */
void UpdateNetworkProfileResponsePrivate::parseUpdateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
