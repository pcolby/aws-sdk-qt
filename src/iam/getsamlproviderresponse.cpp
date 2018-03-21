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

#include "getsamlproviderresponse.h"
#include "getsamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetSAMLProviderResponse
 *
 * @brief  Handles IAM GetSAMLProvider responses.
 *
 * @see    IAMClient::getSAMLProvider
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSAMLProviderResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new GetSAMLProviderRequest(request));
    setReply(reply);
}

const GetSAMLProviderRequest * GetSAMLProviderResponse::request() const
{
    Q_D(const GetSAMLProviderResponse);
    return static_cast<const GetSAMLProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetSAMLProvider response.
 *
 * @param  response  Response to parse.
 */
void GetSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSAMLProviderResponsePrivate
 *
 * @brief  Private implementation for GetSAMLProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSAMLProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSAMLProviderResponse instance.
 */
GetSAMLProviderResponsePrivate::GetSAMLProviderResponsePrivate(
    GetSAMLProviderQueueResponse * const q) : GetSAMLProviderPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetSAMLProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSAMLProviderResponsePrivate::GetSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSAMLProviderResponse"));
    /// @todo
}
