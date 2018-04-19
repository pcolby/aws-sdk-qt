/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getfindingsresponse.h"
#include "getfindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetFindingsResponse
 * \brief The GetFindingsResponse class provides an interace for GuardDuty GetFindings responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getFindings
 */

/*!
 * Constructs a GetFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetFindingsResponse::GetFindingsResponse(
        const GetFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetFindingsResponsePrivate(this), parent)
{
    setRequest(new GetFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFindingsRequest * GetFindingsResponse::request() const
{
    Q_D(const GetFindingsResponse);
    return static_cast<const GetFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty GetFindings \a response.
 */
void GetFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::GetFindingsResponsePrivate
 * \brief The GetFindingsResponsePrivate class provides private implementation for GetFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetFindingsResponsePrivate object with public implementation \a q.
 */
GetFindingsResponsePrivate::GetFindingsResponsePrivate(
    GetFindingsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty GetFindings response element from \a xml.
 */
void GetFindingsResponsePrivate::parseGetFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFindingsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
