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

#include "deletethreatintelsetresponse.h"
#include "deletethreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteThreatIntelSetResponse
 * \brief The DeleteThreatIntelSetResponse class provides an interace for GuardDuty DeleteThreatIntelSet responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::deleteThreatIntelSet
 */

/*!
 * Constructs a DeleteThreatIntelSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThreatIntelSetResponse::DeleteThreatIntelSetResponse(
        const DeleteThreatIntelSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new DeleteThreatIntelSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThreatIntelSetRequest * DeleteThreatIntelSetResponse::request() const
{
    Q_D(const DeleteThreatIntelSetResponse);
    return static_cast<const DeleteThreatIntelSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty DeleteThreatIntelSet \a response.
 */
void DeleteThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteThreatIntelSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::DeleteThreatIntelSetResponsePrivate
 * \brief The DeleteThreatIntelSetResponsePrivate class provides private implementation for DeleteThreatIntelSetResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DeleteThreatIntelSetResponsePrivate object with public implementation \a q.
 */
DeleteThreatIntelSetResponsePrivate::DeleteThreatIntelSetResponsePrivate(
    DeleteThreatIntelSetResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty DeleteThreatIntelSet response element from \a xml.
 */
void DeleteThreatIntelSetResponsePrivate::parseDeleteThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThreatIntelSetResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
