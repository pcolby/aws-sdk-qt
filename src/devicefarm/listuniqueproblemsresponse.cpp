/*
    Copyright 2013-2018 Paul Colby

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
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
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
    Q_D(ListUniqueProblemsResponse);
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
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
