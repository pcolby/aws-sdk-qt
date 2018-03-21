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

#include "getcheckeriprangesresponse.h"
#include "getcheckeriprangesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetCheckerIpRangesResponse
 *
 * @brief  Handles Route53 GetCheckerIpRanges responses.
 *
 * @see    Route53Client::getCheckerIpRanges
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCheckerIpRangesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetCheckerIpRangesResponsePrivate(this), parent)
{
    setRequest(new GetCheckerIpRangesRequest(request));
    setReply(reply);
}

const GetCheckerIpRangesRequest * GetCheckerIpRangesResponse::request() const
{
    Q_D(const GetCheckerIpRangesResponse);
    return static_cast<const GetCheckerIpRangesRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetCheckerIpRanges response.
 *
 * @param  response  Response to parse.
 */
void GetCheckerIpRangesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCheckerIpRangesResponsePrivate
 *
 * @brief  Private implementation for GetCheckerIpRangesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCheckerIpRangesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCheckerIpRangesResponse instance.
 */
GetCheckerIpRangesResponsePrivate::GetCheckerIpRangesResponsePrivate(
    GetCheckerIpRangesQueueResponse * const q) : GetCheckerIpRangesPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetCheckerIpRangesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCheckerIpRangesResponsePrivate::GetCheckerIpRangesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCheckerIpRangesResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
