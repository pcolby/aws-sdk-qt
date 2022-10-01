// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinstanceprofileresponse.h"
#include "createinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateInstanceProfileResponse
 * \brief The CreateInstanceProfileResponse class provides an interace for DeviceFarm CreateInstanceProfile responses.
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
 * \sa DeviceFarmClient::createInstanceProfile
 */

/*!
 * Constructs a CreateInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInstanceProfileResponse::CreateInstanceProfileResponse(
        const CreateInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInstanceProfileRequest * CreateInstanceProfileResponse::request() const
{
    Q_D(const CreateInstanceProfileResponse);
    return static_cast<const CreateInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateInstanceProfile \a response.
 */
void CreateInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateInstanceProfileResponsePrivate
 * \brief The CreateInstanceProfileResponsePrivate class provides private implementation for CreateInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateInstanceProfileResponsePrivate object with public implementation \a q.
 */
CreateInstanceProfileResponsePrivate::CreateInstanceProfileResponsePrivate(
    CreateInstanceProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateInstanceProfile response element from \a xml.
 */
void CreateInstanceProfileResponsePrivate::parseCreateInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
