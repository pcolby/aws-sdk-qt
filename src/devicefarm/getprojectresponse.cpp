// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprojectresponse.h"
#include "getprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetProjectResponse
 * \brief The GetProjectResponse class provides an interace for DeviceFarm GetProject responses.
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
 * \sa DeviceFarmClient::getProject
 */

/*!
 * Constructs a GetProjectResponse object for \a reply to \a request, with parent \a parent.
 */
GetProjectResponse::GetProjectResponse(
        const GetProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetProjectResponsePrivate(this), parent)
{
    setRequest(new GetProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProjectRequest * GetProjectResponse::request() const
{
    Q_D(const GetProjectResponse);
    return static_cast<const GetProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetProject \a response.
 */
void GetProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetProjectResponsePrivate
 * \brief The GetProjectResponsePrivate class provides private implementation for GetProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetProjectResponsePrivate object with public implementation \a q.
 */
GetProjectResponsePrivate::GetProjectResponsePrivate(
    GetProjectResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetProject response element from \a xml.
 */
void GetProjectResponsePrivate::parseGetProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
