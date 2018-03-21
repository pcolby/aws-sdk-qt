/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "unarchivefindingsresponse.h"
#include "unarchivefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  UnarchiveFindingsResponse
 *
 * @brief  Handles GuardDuty UnarchiveFindings responses.
 *
 * @see    GuardDutyClient::unarchiveFindings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnarchiveFindingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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
    Q_D(Response);
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
    UnarchiveFindingsQueueResponse * const q) : UnarchiveFindingsPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty UnarchiveFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnarchiveFindingsResponsePrivate::UnarchiveFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnarchiveFindingsResponse"));
    /// @todo
}
