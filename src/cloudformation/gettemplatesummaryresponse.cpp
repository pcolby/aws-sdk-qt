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

#include "gettemplatesummaryresponse.h"
#include "gettemplatesummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  GetTemplateSummaryResponse
 *
 * @brief  Handles CloudFormation GetTemplateSummary responses.
 *
 * @see    CloudFormationClient::getTemplateSummary
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTemplateSummaryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new GetTemplateSummaryResponsePrivate(this), parent)
{
    setRequest(new GetTemplateSummaryRequest(request));
    setReply(reply);
}

const GetTemplateSummaryRequest * GetTemplateSummaryResponse::request() const
{
    Q_D(const GetTemplateSummaryResponse);
    return static_cast<const GetTemplateSummaryRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation GetTemplateSummary response.
 *
 * @param  response  Response to parse.
 */
void GetTemplateSummaryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTemplateSummaryResponsePrivate
 *
 * @brief  Private implementation for GetTemplateSummaryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTemplateSummaryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTemplateSummaryResponse instance.
 */
GetTemplateSummaryResponsePrivate::GetTemplateSummaryResponsePrivate(
    GetTemplateSummaryQueueResponse * const q) : GetTemplateSummaryPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation GetTemplateSummaryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTemplateSummaryResponsePrivate::GetTemplateSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTemplateSummaryResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
