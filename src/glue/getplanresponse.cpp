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

#include "getplanresponse.h"
#include "getplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetPlanResponse
 *
 * @brief  Handles Glue GetPlan responses.
 *
 * @see    GlueClient::getPlan
 */

/**
 * @brief  Constructs a new GetPlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPlanResponse::GetPlanResponse(
        const GetPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPlanResponsePrivate(this), parent)
{
    setRequest(new GetPlanRequest(request));
    setReply(reply);
}

const GetPlanRequest * GetPlanResponse::request() const
{
    Q_D(const GetPlanResponse);
    return static_cast<const GetPlanRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetPlan response.
 *
 * @param  response  Response to parse.
 */
void GetPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPlanResponsePrivate
 *
 * @brief  Private implementation for GetPlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPlanResponse instance.
 */
GetPlanResponsePrivate::GetPlanResponsePrivate(
    GetPlanQueueResponse * const q) : GetPlanPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetPlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPlanResponsePrivate::GetPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPlanResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
