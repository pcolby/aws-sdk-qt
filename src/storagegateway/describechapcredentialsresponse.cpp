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

#include "describechapcredentialsresponse.h"
#include "describechapcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeChapCredentialsResponse
 *
 * @brief  Handles StorageGateway DescribeChapCredentials responses.
 *
 * @see    StorageGatewayClient::describeChapCredentials
 */

/**
 * @brief  Constructs a new DescribeChapCredentialsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeChapCredentialsResponse::DescribeChapCredentialsResponse(
        const DescribeChapCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeChapCredentialsResponsePrivate(this), parent)
{
    setRequest(new DescribeChapCredentialsRequest(request));
    setReply(reply);
}

const DescribeChapCredentialsRequest * DescribeChapCredentialsResponse::request() const
{
    Q_D(const DescribeChapCredentialsResponse);
    return static_cast<const DescribeChapCredentialsRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeChapCredentials response.
 *
 * @param  response  Response to parse.
 */
void DescribeChapCredentialsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeChapCredentialsResponsePrivate
 *
 * @brief  Private implementation for DescribeChapCredentialsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChapCredentialsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeChapCredentialsResponse instance.
 */
DescribeChapCredentialsResponsePrivate::DescribeChapCredentialsResponsePrivate(
    DescribeChapCredentialsQueueResponse * const q) : DescribeChapCredentialsPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeChapCredentialsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeChapCredentialsResponsePrivate::DescribeChapCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChapCredentialsResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
