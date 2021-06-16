/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listrunsresponse.h"
#include "listrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListRunsResponse
 * \brief The ListRunsResponse class provides an interace for DeviceFarm ListRuns responses.
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
 * \sa DeviceFarmClient::listRuns
 */

/*!
 * Constructs a ListRunsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRunsResponse::ListRunsResponse(
        const ListRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListRunsResponsePrivate(this), parent)
{
    setRequest(new ListRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRunsRequest * ListRunsResponse::request() const
{
    Q_D(const ListRunsResponse);
    return static_cast<const ListRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListRuns \a response.
 */
void ListRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListRunsResponsePrivate
 * \brief The ListRunsResponsePrivate class provides private implementation for ListRunsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListRunsResponsePrivate object with public implementation \a q.
 */
ListRunsResponsePrivate::ListRunsResponsePrivate(
    ListRunsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListRuns response element from \a xml.
 */
void ListRunsResponsePrivate::parseListRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
