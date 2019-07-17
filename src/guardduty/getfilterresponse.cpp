/*
    Copyright 2013-2019 Paul Colby

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

#include "getfilterresponse.h"
#include "getfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetFilterResponse
 * \brief The GetFilterResponse class provides an interace for GuardDuty GetFilter responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getFilter
 */

/*!
 * Constructs a GetFilterResponse object for \a reply to \a request, with parent \a parent.
 */
GetFilterResponse::GetFilterResponse(
        const GetFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetFilterResponsePrivate(this), parent)
{
    setRequest(new GetFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFilterRequest * GetFilterResponse::request() const
{
    Q_D(const GetFilterResponse);
    return static_cast<const GetFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty GetFilter \a response.
 */
void GetFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::GetFilterResponsePrivate
 * \brief The GetFilterResponsePrivate class provides private implementation for GetFilterResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetFilterResponsePrivate object with public implementation \a q.
 */
GetFilterResponsePrivate::GetFilterResponsePrivate(
    GetFilterResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty GetFilter response element from \a xml.
 */
void GetFilterResponsePrivate::parseGetFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
