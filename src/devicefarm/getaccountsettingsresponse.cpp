// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountsettingsresponse.h"
#include "getaccountsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetAccountSettingsResponse
 * \brief The GetAccountSettingsResponse class provides an interace for DeviceFarm GetAccountSettings responses.
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
 * \sa DeviceFarmClient::getAccountSettings
 */

/*!
 * Constructs a GetAccountSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountSettingsResponse::GetAccountSettingsResponse(
        const GetAccountSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetAccountSettingsResponsePrivate(this), parent)
{
    setRequest(new GetAccountSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountSettingsRequest * GetAccountSettingsResponse::request() const
{
    Q_D(const GetAccountSettingsResponse);
    return static_cast<const GetAccountSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetAccountSettings \a response.
 */
void GetAccountSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetAccountSettingsResponsePrivate
 * \brief The GetAccountSettingsResponsePrivate class provides private implementation for GetAccountSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetAccountSettingsResponsePrivate object with public implementation \a q.
 */
GetAccountSettingsResponsePrivate::GetAccountSettingsResponsePrivate(
    GetAccountSettingsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetAccountSettings response element from \a xml.
 */
void GetAccountSettingsResponsePrivate::parseGetAccountSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
