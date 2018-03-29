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

#include "unarchivefindingsresponse.h"
#include "unarchivefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  UnarchiveFindingsResponse
 *
 * @brief  Handles GuardDuty UnarchiveFindings responses.
 *
 * @see    GuardDutyClient::unarchiveFindings
 */

/**
 * @brief  Constructs a new UnarchiveFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const UnarchiveFindingsRequest * UnarchiveFindingsResponse::request() const
{
    Q_D(const UnarchiveFindingsResponse);
    return static_cast<const UnarchiveFindingsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty UnarchiveFindings response.
 *
 * @param  response  Response to parse.
 */
void UnarchiveFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(UnarchiveFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnarchiveFindingsResponsePrivate
 *
 * @brief  Private implementation for UnarchiveFindingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnarchiveFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnarchiveFindingsResponse instance.
 */
UnarchiveFindingsResponsePrivate::UnarchiveFindingsResponsePrivate(
    UnarchiveFindingsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty UnarchiveFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnarchiveFindingsResponsePrivate::parseUnarchiveFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnarchiveFindingsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
