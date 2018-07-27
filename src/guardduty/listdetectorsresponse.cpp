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

#include "listdetectorsresponse.h"
#include "listdetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListDetectorsResponse
 * \brief The ListDetectorsResponse class provides an interace for GuardDuty ListDetectors responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::listDetectors
 */

/*!
 * Constructs a ListDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDetectorsResponse::ListDetectorsResponse(
        const ListDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListDetectorsResponsePrivate(this), parent)
{
    setRequest(new ListDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDetectorsRequest * ListDetectorsResponse::request() const
{
    Q_D(const ListDetectorsResponse);
    return static_cast<const ListDetectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty ListDetectors \a response.
 */
void ListDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::ListDetectorsResponsePrivate
 * \brief The ListDetectorsResponsePrivate class provides private implementation for ListDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListDetectorsResponsePrivate object with public implementation \a q.
 */
ListDetectorsResponsePrivate::ListDetectorsResponsePrivate(
    ListDetectorsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty ListDetectors response element from \a xml.
 */
void ListDetectorsResponsePrivate::parseListDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
