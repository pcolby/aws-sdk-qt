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

#include "acceptmatchresponse.h"
#include "acceptmatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  AcceptMatchResponse
 *
 * @brief  Handles GameLift AcceptMatch responses.
 *
 * @see    GameLiftClient::acceptMatch
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptMatchResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new AcceptMatchResponsePrivate(this), parent)
{
    setRequest(new AcceptMatchRequest(request));
    setReply(reply);
}

const AcceptMatchRequest * AcceptMatchResponse::request() const
{
    Q_D(const AcceptMatchResponse);
    return static_cast<const AcceptMatchRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift AcceptMatch response.
 *
 * @param  response  Response to parse.
 */
void AcceptMatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcceptMatchResponsePrivate
 *
 * @brief  Private implementation for AcceptMatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptMatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptMatchResponse instance.
 */
AcceptMatchResponsePrivate::AcceptMatchResponsePrivate(
    AcceptMatchQueueResponse * const q) : AcceptMatchPrivate(q)
{

}

/**
 * @brief  Parse an GameLift AcceptMatchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptMatchResponsePrivate::AcceptMatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptMatchResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
