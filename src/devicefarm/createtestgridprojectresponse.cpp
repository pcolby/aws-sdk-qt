// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtestgridprojectresponse.h"
#include "createtestgridprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateTestGridProjectResponse
 * \brief The CreateTestGridProjectResponse class provides an interace for DeviceFarm CreateTestGridProject responses.
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
 * \sa DeviceFarmClient::createTestGridProject
 */

/*!
 * Constructs a CreateTestGridProjectResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTestGridProjectResponse::CreateTestGridProjectResponse(
        const CreateTestGridProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateTestGridProjectResponsePrivate(this), parent)
{
    setRequest(new CreateTestGridProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTestGridProjectRequest * CreateTestGridProjectResponse::request() const
{
    Q_D(const CreateTestGridProjectResponse);
    return static_cast<const CreateTestGridProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateTestGridProject \a response.
 */
void CreateTestGridProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTestGridProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateTestGridProjectResponsePrivate
 * \brief The CreateTestGridProjectResponsePrivate class provides private implementation for CreateTestGridProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateTestGridProjectResponsePrivate object with public implementation \a q.
 */
CreateTestGridProjectResponsePrivate::CreateTestGridProjectResponsePrivate(
    CreateTestGridProjectResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateTestGridProject response element from \a xml.
 */
void CreateTestGridProjectResponsePrivate::parseCreateTestGridProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTestGridProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
