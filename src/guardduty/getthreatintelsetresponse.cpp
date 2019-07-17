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

#include "getthreatintelsetresponse.h"
#include "getthreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetThreatIntelSetResponse
 * \brief The GetThreatIntelSetResponse class provides an interace for GuardDuty GetThreatIntelSet responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getThreatIntelSet
 */

/*!
 * Constructs a GetThreatIntelSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetThreatIntelSetResponse::GetThreatIntelSetResponse(
        const GetThreatIntelSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new GetThreatIntelSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetThreatIntelSetRequest * GetThreatIntelSetResponse::request() const
{
    Q_D(const GetThreatIntelSetResponse);
    return static_cast<const GetThreatIntelSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty GetThreatIntelSet \a response.
 */
void GetThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetThreatIntelSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::GetThreatIntelSetResponsePrivate
 * \brief The GetThreatIntelSetResponsePrivate class provides private implementation for GetThreatIntelSetResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetThreatIntelSetResponsePrivate object with public implementation \a q.
 */
GetThreatIntelSetResponsePrivate::GetThreatIntelSetResponsePrivate(
    GetThreatIntelSetResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty GetThreatIntelSet response element from \a xml.
 */
void GetThreatIntelSetResponsePrivate::parseGetThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThreatIntelSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
