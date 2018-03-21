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

#include "getqualificationscoreresponse.h"
#include "getqualificationscoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  GetQualificationScoreResponse
 *
 * @brief  Handles MTurk GetQualificationScore responses.
 *
 * @see    MTurkClient::getQualificationScore
 */

/**
 * @brief  Constructs a new GetQualificationScoreResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQualificationScoreResponse::GetQualificationScoreResponse(
        const GetQualificationScoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetQualificationScoreResponsePrivate(this), parent)
{
    setRequest(new GetQualificationScoreRequest(request));
    setReply(reply);
}

const GetQualificationScoreRequest * GetQualificationScoreResponse::request() const
{
    Q_D(const GetQualificationScoreResponse);
    return static_cast<const GetQualificationScoreRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk GetQualificationScore response.
 *
 * @param  response  Response to parse.
 */
void GetQualificationScoreResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetQualificationScoreResponsePrivate
 *
 * @brief  Private implementation for GetQualificationScoreResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQualificationScoreResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQualificationScoreResponse instance.
 */
GetQualificationScoreResponsePrivate::GetQualificationScoreResponsePrivate(
    GetQualificationScoreQueueResponse * const q) : GetQualificationScorePrivate(q)
{

}

/**
 * @brief  Parse an MTurk GetQualificationScoreResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQualificationScoreResponsePrivate::GetQualificationScoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQualificationScoreResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
