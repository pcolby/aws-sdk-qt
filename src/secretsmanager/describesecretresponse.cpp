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

#include "describesecretresponse.h"
#include "describesecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  DescribeSecretResponse
 *
 * @brief  Handles SecretsManager DescribeSecret responses.
 *
 * @see    SecretsManagerClient::describeSecret
 */

/**
 * @brief  Constructs a new DescribeSecretResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSecretResponse::DescribeSecretResponse(
        const DescribeSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new DescribeSecretResponsePrivate(this), parent)
{
    setRequest(new DescribeSecretRequest(request));
    setReply(reply);
}

const DescribeSecretRequest * DescribeSecretResponse::request() const
{
    Q_D(const DescribeSecretResponse);
    return static_cast<const DescribeSecretRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager DescribeSecret response.
 *
 * @param  response  Response to parse.
 */
void DescribeSecretResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSecretResponsePrivate
 *
 * @brief  Private implementation for DescribeSecretResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecretResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSecretResponse instance.
 */
DescribeSecretResponsePrivate::DescribeSecretResponsePrivate(
    DescribeSecretResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager DescribeSecretResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSecretResponsePrivate::parseDescribeSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSecretResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
