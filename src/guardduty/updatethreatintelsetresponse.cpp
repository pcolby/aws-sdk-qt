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

#include "updatethreatintelsetresponse.h"
#include "updatethreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UpdateThreatIntelSetResponse
 * \brief The UpdateThreatIntelSetResponse class provides an interace for GuardDuty UpdateThreatIntelSet responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::updateThreatIntelSet
 */

/*!
 * Constructs a UpdateThreatIntelSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThreatIntelSetResponse::UpdateThreatIntelSetResponse(
        const UpdateThreatIntelSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new UpdateThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new UpdateThreatIntelSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThreatIntelSetRequest * UpdateThreatIntelSetResponse::request() const
{
    Q_D(const UpdateThreatIntelSetResponse);
    return static_cast<const UpdateThreatIntelSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty UpdateThreatIntelSet \a response.
 */
void UpdateThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThreatIntelSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::UpdateThreatIntelSetResponsePrivate
 * \brief The UpdateThreatIntelSetResponsePrivate class provides private implementation for UpdateThreatIntelSetResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a UpdateThreatIntelSetResponsePrivate object with public implementation \a q.
 */
UpdateThreatIntelSetResponsePrivate::UpdateThreatIntelSetResponsePrivate(
    UpdateThreatIntelSetResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty UpdateThreatIntelSet response element from \a xml.
 */
void UpdateThreatIntelSetResponsePrivate::parseUpdateThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThreatIntelSetResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
