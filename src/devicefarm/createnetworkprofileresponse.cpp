// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnetworkprofileresponse.h"
#include "createnetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateNetworkProfileResponse
 * \brief The CreateNetworkProfileResponse class provides an interace for DeviceFarm CreateNetworkProfile responses.
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
 * \sa DeviceFarmClient::createNetworkProfile
 */

/*!
 * Constructs a CreateNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkProfileResponse::CreateNetworkProfileResponse(
        const CreateNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkProfileRequest * CreateNetworkProfileResponse::request() const
{
    Q_D(const CreateNetworkProfileResponse);
    return static_cast<const CreateNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateNetworkProfile \a response.
 */
void CreateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateNetworkProfileResponsePrivate
 * \brief The CreateNetworkProfileResponsePrivate class provides private implementation for CreateNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateNetworkProfileResponsePrivate object with public implementation \a q.
 */
CreateNetworkProfileResponsePrivate::CreateNetworkProfileResponsePrivate(
    CreateNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateNetworkProfile response element from \a xml.
 */
void CreateNetworkProfileResponsePrivate::parseCreateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
