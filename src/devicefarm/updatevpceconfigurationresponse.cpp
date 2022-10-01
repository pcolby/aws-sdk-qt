// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevpceconfigurationresponse.h"
#include "updatevpceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateVPCEConfigurationResponse
 * \brief The UpdateVPCEConfigurationResponse class provides an interace for DeviceFarm UpdateVPCEConfiguration responses.
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
 * \sa DeviceFarmClient::updateVPCEConfiguration
 */

/*!
 * Constructs a UpdateVPCEConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVPCEConfigurationResponse::UpdateVPCEConfigurationResponse(
        const UpdateVPCEConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateVPCEConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateVPCEConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVPCEConfigurationRequest * UpdateVPCEConfigurationResponse::request() const
{
    Q_D(const UpdateVPCEConfigurationResponse);
    return static_cast<const UpdateVPCEConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateVPCEConfiguration \a response.
 */
void UpdateVPCEConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVPCEConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateVPCEConfigurationResponsePrivate
 * \brief The UpdateVPCEConfigurationResponsePrivate class provides private implementation for UpdateVPCEConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateVPCEConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateVPCEConfigurationResponsePrivate::UpdateVPCEConfigurationResponsePrivate(
    UpdateVPCEConfigurationResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateVPCEConfiguration response element from \a xml.
 */
void UpdateVPCEConfigurationResponsePrivate::parseUpdateVPCEConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVPCEConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
