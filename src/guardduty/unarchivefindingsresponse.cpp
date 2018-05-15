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

#include "unarchivefindingsresponse.h"
#include "unarchivefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UnarchiveFindingsResponse
 * \brief The UnarchiveFindingsResponse class provides an interace for GuardDuty UnarchiveFindings responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::unarchiveFindings
 */

/*!
 * Constructs a UnarchiveFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
UnarchiveFindingsResponse::UnarchiveFindingsResponse(
        const UnarchiveFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new UnarchiveFindingsResponsePrivate(this), parent)
{
    setRequest(new UnarchiveFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnarchiveFindingsRequest * UnarchiveFindingsResponse::request() const
{
    Q_D(const UnarchiveFindingsResponse);
    return static_cast<const UnarchiveFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty UnarchiveFindings \a response.
 */
void UnarchiveFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnarchiveFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::UnarchiveFindingsResponsePrivate
 * \brief The UnarchiveFindingsResponsePrivate class provides private implementation for UnarchiveFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a UnarchiveFindingsResponsePrivate object with public implementation \a q.
 */
UnarchiveFindingsResponsePrivate::UnarchiveFindingsResponsePrivate(
    UnarchiveFindingsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty UnarchiveFindings response element from \a xml.
 */
void UnarchiveFindingsResponsePrivate::parseUnarchiveFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnarchiveFindingsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
