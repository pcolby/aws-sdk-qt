// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterunresponse.h"
#include "deleterunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteRunResponse
 * \brief The DeleteRunResponse class provides an interace for DeviceFarm DeleteRun responses.
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
 * \sa DeviceFarmClient::deleteRun
 */

/*!
 * Constructs a DeleteRunResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRunResponse::DeleteRunResponse(
        const DeleteRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteRunResponsePrivate(this), parent)
{
    setRequest(new DeleteRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRunRequest * DeleteRunResponse::request() const
{
    Q_D(const DeleteRunResponse);
    return static_cast<const DeleteRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm DeleteRun \a response.
 */
void DeleteRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::DeleteRunResponsePrivate
 * \brief The DeleteRunResponsePrivate class provides private implementation for DeleteRunResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteRunResponsePrivate object with public implementation \a q.
 */
DeleteRunResponsePrivate::DeleteRunResponsePrivate(
    DeleteRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm DeleteRun response element from \a xml.
 */
void DeleteRunResponsePrivate::parseDeleteRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
