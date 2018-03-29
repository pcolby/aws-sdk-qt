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

#include "cancelkeydeletionresponse.h"
#include "cancelkeydeletionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  CancelKeyDeletionResponse
 *
 * @brief  Handles KMS CancelKeyDeletion responses.
 *
 * @see    KMSClient::cancelKeyDeletion
 */

/**
 * @brief  Constructs a new CancelKeyDeletionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelKeyDeletionResponse::CancelKeyDeletionResponse(
        const CancelKeyDeletionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new CancelKeyDeletionResponsePrivate(this), parent)
{
    setRequest(new CancelKeyDeletionRequest(request));
    setReply(reply);
}

const CancelKeyDeletionRequest * CancelKeyDeletionResponse::request() const
{
    Q_D(const CancelKeyDeletionResponse);
    return static_cast<const CancelKeyDeletionRequest *>(d->request);
}

/**
 * @brief  Parse a KMS CancelKeyDeletion response.
 *
 * @param  response  Response to parse.
 */
void CancelKeyDeletionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelKeyDeletionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelKeyDeletionResponsePrivate
 *
 * @brief  Private implementation for CancelKeyDeletionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelKeyDeletionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelKeyDeletionResponse instance.
 */
CancelKeyDeletionResponsePrivate::CancelKeyDeletionResponsePrivate(
    CancelKeyDeletionResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS CancelKeyDeletionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelKeyDeletionResponsePrivate::CancelKeyDeletionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelKeyDeletionResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
