// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinstanceprofileresponse.h"
#include "getinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetInstanceProfileResponse
 * \brief The GetInstanceProfileResponse class provides an interace for DeviceFarm GetInstanceProfile responses.
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
 * \sa DeviceFarmClient::getInstanceProfile
 */

/*!
 * Constructs a GetInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetInstanceProfileResponse::GetInstanceProfileResponse(
        const GetInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new GetInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInstanceProfileRequest * GetInstanceProfileResponse::request() const
{
    Q_D(const GetInstanceProfileResponse);
    return static_cast<const GetInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetInstanceProfile \a response.
 */
void GetInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetInstanceProfileResponsePrivate
 * \brief The GetInstanceProfileResponsePrivate class provides private implementation for GetInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetInstanceProfileResponsePrivate object with public implementation \a q.
 */
GetInstanceProfileResponsePrivate::GetInstanceProfileResponsePrivate(
    GetInstanceProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetInstanceProfile response element from \a xml.
 */
void GetInstanceProfileResponsePrivate::parseGetInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
