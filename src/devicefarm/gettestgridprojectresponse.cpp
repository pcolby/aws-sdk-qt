// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettestgridprojectresponse.h"
#include "gettestgridprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetTestGridProjectResponse
 * \brief The GetTestGridProjectResponse class provides an interace for DeviceFarm GetTestGridProject responses.
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
 * \sa DeviceFarmClient::getTestGridProject
 */

/*!
 * Constructs a GetTestGridProjectResponse object for \a reply to \a request, with parent \a parent.
 */
GetTestGridProjectResponse::GetTestGridProjectResponse(
        const GetTestGridProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetTestGridProjectResponsePrivate(this), parent)
{
    setRequest(new GetTestGridProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTestGridProjectRequest * GetTestGridProjectResponse::request() const
{
    Q_D(const GetTestGridProjectResponse);
    return static_cast<const GetTestGridProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetTestGridProject \a response.
 */
void GetTestGridProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTestGridProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetTestGridProjectResponsePrivate
 * \brief The GetTestGridProjectResponsePrivate class provides private implementation for GetTestGridProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetTestGridProjectResponsePrivate object with public implementation \a q.
 */
GetTestGridProjectResponsePrivate::GetTestGridProjectResponsePrivate(
    GetTestGridProjectResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetTestGridProject response element from \a xml.
 */
void GetTestGridProjectResponsePrivate::parseGetTestGridProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTestGridProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
