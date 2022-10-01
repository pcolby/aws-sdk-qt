// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevpceconfigurationresponse.h"
#include "deletevpceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteVPCEConfigurationResponse
 * \brief The DeleteVPCEConfigurationResponse class provides an interace for DeviceFarm DeleteVPCEConfiguration responses.
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
 * \sa DeviceFarmClient::deleteVPCEConfiguration
 */

/*!
 * Constructs a DeleteVPCEConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVPCEConfigurationResponse::DeleteVPCEConfigurationResponse(
        const DeleteVPCEConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteVPCEConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteVPCEConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVPCEConfigurationRequest * DeleteVPCEConfigurationResponse::request() const
{
    Q_D(const DeleteVPCEConfigurationResponse);
    return static_cast<const DeleteVPCEConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm DeleteVPCEConfiguration \a response.
 */
void DeleteVPCEConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVPCEConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::DeleteVPCEConfigurationResponsePrivate
 * \brief The DeleteVPCEConfigurationResponsePrivate class provides private implementation for DeleteVPCEConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteVPCEConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteVPCEConfigurationResponsePrivate::DeleteVPCEConfigurationResponsePrivate(
    DeleteVPCEConfigurationResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm DeleteVPCEConfiguration response element from \a xml.
 */
void DeleteVPCEConfigurationResponsePrivate::parseDeleteVPCEConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVPCEConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
