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

/**
 * @class  GetFindingsResponse
 *
 * @brief  Handles GuardDuty GetFindings responses.
 *
 * @see    GuardDutyClient::getFindings
 */

/**
 * @brief  Constructs a new GetFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const GetFindingsRequest * GetFindingsResponse::request() const
{
    Q_D(const GetFindingsResponse);
    return static_cast<const GetFindingsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty GetFindings response.
 *
 * @param  response  Response to parse.
 */
void GetFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFindingsResponsePrivate
 *
 * @brief  Private implementation for GetFindingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFindingsResponse instance.
 */
GetFindingsResponsePrivate::GetFindingsResponsePrivate(
    GetFindingsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty GetFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFindingsResponsePrivate::GetFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFindingsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
