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

#include "getparametersforimportresponse.h"
#include "getparametersforimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  GetParametersForImportResponse
 *
 * @brief  Handles KMS GetParametersForImport responses.
 *
 * @see    KMSClient::getParametersForImport
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetParametersForImportResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new GetParametersForImportResponsePrivate(this), parent)
{
    setRequest(new GetParametersForImportRequest(request));
    setReply(reply);
}

const GetParametersForImportRequest * GetParametersForImportResponse::request() const
{
    Q_D(const GetParametersForImportResponse);
    return static_cast<const GetParametersForImportRequest *>(d->request);
}

/**
 * @brief  Parse a KMS GetParametersForImport response.
 *
 * @param  response  Response to parse.
 */
void GetParametersForImportResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetParametersForImportResponsePrivate
 *
 * @brief  Private implementation for GetParametersForImportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersForImportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetParametersForImportResponse instance.
 */
GetParametersForImportResponsePrivate::GetParametersForImportResponsePrivate(
    GetParametersForImportQueueResponse * const q) : GetParametersForImportPrivate(q)
{

}

/**
 * @brief  Parse an KMS GetParametersForImportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetParametersForImportResponsePrivate::GetParametersForImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetParametersForImportResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS
