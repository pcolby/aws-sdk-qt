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

#include "stopmonitoringmembersresponse.h"
#include "stopmonitoringmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::StopMonitoringMembersResponse
 *
 * \brief The StopMonitoringMembersResponse class provides an interace for GuardDuty StopMonitoringMembers responses.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::stopMonitoringMembers
 */

/*!
 * @brief  Constructs a new StopMonitoringMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopMonitoringMembersResponse::StopMonitoringMembersResponse(
        const StopMonitoringMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new StopMonitoringMembersResponsePrivate(this), parent)
{
    setRequest(new StopMonitoringMembersRequest(request));
    setReply(reply);
}

const StopMonitoringMembersRequest * StopMonitoringMembersResponse::request() const
{
    Q_D(const StopMonitoringMembersResponse);
    return static_cast<const StopMonitoringMembersRequest *>(d->request);
}

/*!
 * @brief  Parse a GuardDuty StopMonitoringMembers response.
 *
 * @param  response  Response to parse.
 */
void StopMonitoringMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopMonitoringMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StopMonitoringMembersResponsePrivate
 *
 * \brief Private implementation for StopMonitoringMembersResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopMonitoringMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopMonitoringMembersResponse instance.
 */
StopMonitoringMembersResponsePrivate::StopMonitoringMembersResponsePrivate(
    StopMonitoringMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * @brief  Parse an GuardDuty StopMonitoringMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopMonitoringMembersResponsePrivate::parseStopMonitoringMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopMonitoringMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
