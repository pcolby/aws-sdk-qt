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

#include "getcompliancesummarybyresourcetyperesponse.h"
#include "getcompliancesummarybyresourcetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetComplianceSummaryByResourceTypeResponse
 *
 * @brief  Handles ConfigService GetComplianceSummaryByResourceType responses.
 *
 * @see    ConfigServiceClient::getComplianceSummaryByResourceType
 */

/**
 * @brief  Constructs a new GetComplianceSummaryByResourceTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetComplianceSummaryByResourceTypeResponse::GetComplianceSummaryByResourceTypeResponse(
        const GetComplianceSummaryByResourceTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetComplianceSummaryByResourceTypeResponsePrivate(this), parent)
{
    setRequest(new GetComplianceSummaryByResourceTypeRequest(request));
    setReply(reply);
}

const GetComplianceSummaryByResourceTypeRequest * GetComplianceSummaryByResourceTypeResponse::request() const
{
    Q_D(const GetComplianceSummaryByResourceTypeResponse);
    return static_cast<const GetComplianceSummaryByResourceTypeRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetComplianceSummaryByResourceType response.
 *
 * @param  response  Response to parse.
 */
void GetComplianceSummaryByResourceTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetComplianceSummaryByResourceTypeResponsePrivate
 *
 * @brief  Private implementation for GetComplianceSummaryByResourceTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceSummaryByResourceTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetComplianceSummaryByResourceTypeResponse instance.
 */
GetComplianceSummaryByResourceTypeResponsePrivate::GetComplianceSummaryByResourceTypeResponsePrivate(
    GetComplianceSummaryByResourceTypeQueueResponse * const q) : GetComplianceSummaryByResourceTypePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetComplianceSummaryByResourceTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetComplianceSummaryByResourceTypeResponsePrivate::GetComplianceSummaryByResourceTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComplianceSummaryByResourceTypeResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
