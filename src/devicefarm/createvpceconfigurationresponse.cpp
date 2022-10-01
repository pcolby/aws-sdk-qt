// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvpceconfigurationresponse.h"
#include "createvpceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateVPCEConfigurationResponse
 * \brief The CreateVPCEConfigurationResponse class provides an interace for DeviceFarm CreateVPCEConfiguration responses.
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
 * \sa DeviceFarmClient::createVPCEConfiguration
 */

/*!
 * Constructs a CreateVPCEConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVPCEConfigurationResponse::CreateVPCEConfigurationResponse(
        const CreateVPCEConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateVPCEConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateVPCEConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVPCEConfigurationRequest * CreateVPCEConfigurationResponse::request() const
{
    Q_D(const CreateVPCEConfigurationResponse);
    return static_cast<const CreateVPCEConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateVPCEConfiguration \a response.
 */
void CreateVPCEConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVPCEConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateVPCEConfigurationResponsePrivate
 * \brief The CreateVPCEConfigurationResponsePrivate class provides private implementation for CreateVPCEConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateVPCEConfigurationResponsePrivate object with public implementation \a q.
 */
CreateVPCEConfigurationResponsePrivate::CreateVPCEConfigurationResponsePrivate(
    CreateVPCEConfigurationResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateVPCEConfiguration response element from \a xml.
 */
void CreateVPCEConfigurationResponsePrivate::parseCreateVPCEConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVPCEConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
