// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetestgridprojectresponse.h"
#include "deletetestgridprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteTestGridProjectResponse
 * \brief The DeleteTestGridProjectResponse class provides an interace for DeviceFarm DeleteTestGridProject responses.
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
 * \sa DeviceFarmClient::deleteTestGridProject
 */

/*!
 * Constructs a DeleteTestGridProjectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTestGridProjectResponse::DeleteTestGridProjectResponse(
        const DeleteTestGridProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteTestGridProjectResponsePrivate(this), parent)
{
    setRequest(new DeleteTestGridProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTestGridProjectRequest * DeleteTestGridProjectResponse::request() const
{
    Q_D(const DeleteTestGridProjectResponse);
    return static_cast<const DeleteTestGridProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm DeleteTestGridProject \a response.
 */
void DeleteTestGridProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTestGridProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::DeleteTestGridProjectResponsePrivate
 * \brief The DeleteTestGridProjectResponsePrivate class provides private implementation for DeleteTestGridProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteTestGridProjectResponsePrivate object with public implementation \a q.
 */
DeleteTestGridProjectResponsePrivate::DeleteTestGridProjectResponsePrivate(
    DeleteTestGridProjectResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm DeleteTestGridProject response element from \a xml.
 */
void DeleteTestGridProjectResponsePrivate::parseDeleteTestGridProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTestGridProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
