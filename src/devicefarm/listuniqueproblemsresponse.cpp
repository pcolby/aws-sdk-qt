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

#include "listuniqueproblemsresponse.h"
#include "listuniqueproblemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListUniqueProblemsResponse
 * \brief The ListUniqueProblemsResponse class provides an interace for DeviceFarm ListUniqueProblems responses.
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
 * \sa DeviceFarmClient::listUniqueProblems
 */

/*!
 * Constructs a ListUniqueProblemsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUniqueProblemsResponse::ListUniqueProblemsResponse(
        const ListUniqueProblemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListUniqueProblemsResponsePrivate(this), parent)
{
    setRequest(new ListUniqueProblemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUniqueProblemsRequest * ListUniqueProblemsResponse::request() const
{
    Q_D(const ListUniqueProblemsResponse);
    return static_cast<const ListUniqueProblemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListUniqueProblems \a response.
 */
void ListUniqueProblemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUniqueProblemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListUniqueProblemsResponsePrivate
 * \brief The ListUniqueProblemsResponsePrivate class provides private implementation for ListUniqueProblemsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListUniqueProblemsResponsePrivate object with public implementation \a q.
 */
ListUniqueProblemsResponsePrivate::ListUniqueProblemsResponsePrivate(
    ListUniqueProblemsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListUniqueProblems response element from \a xml.
 */
void ListUniqueProblemsResponsePrivate::parseListUniqueProblemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUniqueProblemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
