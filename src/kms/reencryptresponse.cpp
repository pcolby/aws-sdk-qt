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

#include "reencryptresponse.h"
#include "reencryptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  ReEncryptResponse
 *
 * @brief  Handles KMS ReEncrypt responses.
 *
 * @see    KMSClient::reEncrypt
 */

/**
 * @brief  Constructs a new ReEncryptResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReEncryptResponse::ReEncryptResponse(
        const ReEncryptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ReEncryptResponsePrivate(this), parent)
{
    setRequest(new ReEncryptRequest(request));
    setReply(reply);
}

const ReEncryptRequest * ReEncryptResponse::request() const
{
    Q_D(const ReEncryptResponse);
    return static_cast<const ReEncryptRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ReEncrypt response.
 *
 * @param  response  Response to parse.
 */
void ReEncryptResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReEncryptResponsePrivate
 *
 * @brief  Private implementation for ReEncryptResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReEncryptResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReEncryptResponse instance.
 */
ReEncryptResponsePrivate::ReEncryptResponsePrivate(
    ReEncryptQueueResponse * const q) : ReEncryptPrivate(q)
{

}

/**
 * @brief  Parse an KMS ReEncryptResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReEncryptResponsePrivate::ReEncryptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReEncryptResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
