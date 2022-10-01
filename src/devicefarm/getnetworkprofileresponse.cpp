// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkprofileresponse.h"
#include "getnetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetNetworkProfileResponse
 * \brief The GetNetworkProfileResponse class provides an interace for DeviceFarm GetNetworkProfile responses.
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
 * \sa DeviceFarmClient::getNetworkProfile
 */

/*!
 * Constructs a GetNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkProfileResponse::GetNetworkProfileResponse(
        const GetNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new GetNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkProfileRequest * GetNetworkProfileResponse::request() const
{
    Q_D(const GetNetworkProfileResponse);
    return static_cast<const GetNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetNetworkProfile \a response.
 */
void GetNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetNetworkProfileResponsePrivate
 * \brief The GetNetworkProfileResponsePrivate class provides private implementation for GetNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetNetworkProfileResponsePrivate object with public implementation \a q.
 */
GetNetworkProfileResponsePrivate::GetNetworkProfileResponsePrivate(
    GetNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetNetworkProfile response element from \a xml.
 */
void GetNetworkProfileResponsePrivate::parseGetNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
