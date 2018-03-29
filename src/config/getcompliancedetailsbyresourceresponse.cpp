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

#include "getcompliancedetailsbyresourceresponse.h"
#include "getcompliancedetailsbyresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetComplianceDetailsByResourceResponse
 *
 * @brief  Handles ConfigService GetComplianceDetailsByResource responses.
 *
 * @see    ConfigServiceClient::getComplianceDetailsByResource
 */

/**
 * @brief  Constructs a new GetComplianceDetailsByResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetComplianceDetailsByResourceResponse::GetComplianceDetailsByResourceResponse(
        const GetComplianceDetailsByResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetComplianceDetailsByResourceResponsePrivate(this), parent)
{
    setRequest(new GetComplianceDetailsByResourceRequest(request));
    setReply(reply);
}

const GetComplianceDetailsByResourceRequest * GetComplianceDetailsByResourceResponse::request() const
{
    Q_D(const GetComplianceDetailsByResourceResponse);
    return static_cast<const GetComplianceDetailsByResourceRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetComplianceDetailsByResource response.
 *
 * @param  response  Response to parse.
 */
void GetComplianceDetailsByResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetComplianceDetailsByResourceResponsePrivate
 *
 * @brief  Private implementation for GetComplianceDetailsByResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceDetailsByResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetComplianceDetailsByResourceResponse instance.
 */
GetComplianceDetailsByResourceResponsePrivate::GetComplianceDetailsByResourceResponsePrivate(
    GetComplianceDetailsByResourceResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetComplianceDetailsByResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetComplianceDetailsByResourceResponsePrivate::GetComplianceDetailsByResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComplianceDetailsByResourceResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
