// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprojectresponse.h"
#include "updateprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateProjectResponse
 * \brief The UpdateProjectResponse class provides an interace for DeviceFarm UpdateProject responses.
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
 * \sa DeviceFarmClient::updateProject
 */

/*!
 * Constructs a UpdateProjectResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProjectResponse::UpdateProjectResponse(
        const UpdateProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateProjectResponsePrivate(this), parent)
{
    setRequest(new UpdateProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProjectRequest * UpdateProjectResponse::request() const
{
    Q_D(const UpdateProjectResponse);
    return static_cast<const UpdateProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateProject \a response.
 */
void UpdateProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateProjectResponsePrivate
 * \brief The UpdateProjectResponsePrivate class provides private implementation for UpdateProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateProjectResponsePrivate object with public implementation \a q.
 */
UpdateProjectResponsePrivate::UpdateProjectResponsePrivate(
    UpdateProjectResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateProject response element from \a xml.
 */
void UpdateProjectResponsePrivate::parseUpdateProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
