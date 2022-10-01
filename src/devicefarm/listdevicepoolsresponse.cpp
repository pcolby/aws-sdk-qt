// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicepoolsresponse.h"
#include "listdevicepoolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListDevicePoolsResponse
 * \brief The ListDevicePoolsResponse class provides an interace for DeviceFarm ListDevicePools responses.
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
 * \sa DeviceFarmClient::listDevicePools
 */

/*!
 * Constructs a ListDevicePoolsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicePoolsResponse::ListDevicePoolsResponse(
        const ListDevicePoolsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListDevicePoolsResponsePrivate(this), parent)
{
    setRequest(new ListDevicePoolsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicePoolsRequest * ListDevicePoolsResponse::request() const
{
    Q_D(const ListDevicePoolsResponse);
    return static_cast<const ListDevicePoolsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListDevicePools \a response.
 */
void ListDevicePoolsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicePoolsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListDevicePoolsResponsePrivate
 * \brief The ListDevicePoolsResponsePrivate class provides private implementation for ListDevicePoolsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListDevicePoolsResponsePrivate object with public implementation \a q.
 */
ListDevicePoolsResponsePrivate::ListDevicePoolsResponsePrivate(
    ListDevicePoolsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListDevicePools response element from \a xml.
 */
void ListDevicePoolsResponsePrivate::parseListDevicePoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicePoolsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
