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

#include "describekeyresponse.h"
#include "describekeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  DescribeKeyResponse
 *
 * @brief  Handles KMS DescribeKey responses.
 *
 * @see    KMSClient::describeKey
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeKeyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new DescribeKeyResponsePrivate(this), parent)
{
    setRequest(new DescribeKeyRequest(request));
    setReply(reply);
}

const DescribeKeyRequest * DescribeKeyResponse::request() const
{
    Q_D(const DescribeKeyResponse);
    return static_cast<const DescribeKeyRequest *>(d->request);
}

/**
 * @brief  Parse a KMS DescribeKey response.
 *
 * @param  response  Response to parse.
 */
void DescribeKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeKeyResponsePrivate
 *
 * @brief  Private implementation for DescribeKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeKeyResponse instance.
 */
DescribeKeyResponsePrivate::DescribeKeyResponsePrivate(
    DescribeKeyQueueResponse * const q) : DescribeKeyPrivate(q)
{

}

/**
 * @brief  Parse an KMS DescribeKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeKeyResponsePrivate::DescribeKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeKeyResponse"));
    /// @todo
}
