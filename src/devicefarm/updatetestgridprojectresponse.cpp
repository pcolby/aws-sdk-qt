// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetestgridprojectresponse.h"
#include "updatetestgridprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateTestGridProjectResponse
 * \brief The UpdateTestGridProjectResponse class provides an interace for DeviceFarm UpdateTestGridProject responses.
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
 * \sa DeviceFarmClient::updateTestGridProject
 */

/*!
 * Constructs a UpdateTestGridProjectResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTestGridProjectResponse::UpdateTestGridProjectResponse(
        const UpdateTestGridProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateTestGridProjectResponsePrivate(this), parent)
{
    setRequest(new UpdateTestGridProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTestGridProjectRequest * UpdateTestGridProjectResponse::request() const
{
    Q_D(const UpdateTestGridProjectResponse);
    return static_cast<const UpdateTestGridProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateTestGridProject \a response.
 */
void UpdateTestGridProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTestGridProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateTestGridProjectResponsePrivate
 * \brief The UpdateTestGridProjectResponsePrivate class provides private implementation for UpdateTestGridProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateTestGridProjectResponsePrivate object with public implementation \a q.
 */
UpdateTestGridProjectResponsePrivate::UpdateTestGridProjectResponsePrivate(
    UpdateTestGridProjectResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateTestGridProject response element from \a xml.
 */
void UpdateTestGridProjectResponsePrivate::parseUpdateTestGridProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTestGridProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
