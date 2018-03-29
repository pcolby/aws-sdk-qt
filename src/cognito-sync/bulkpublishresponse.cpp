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

#include "bulkpublishresponse.h"
#include "bulkpublishresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  BulkPublishResponse
 *
 * @brief  Handles CognitoSync BulkPublish responses.
 *
 * @see    CognitoSyncClient::bulkPublish
 */

/**
 * @brief  Constructs a new BulkPublishResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BulkPublishResponse::BulkPublishResponse(
        const BulkPublishRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BulkPublishResponse(new BulkPublishResponsePrivate(this), parent)
{
    setRequest(new BulkPublishRequest(request));
    setReply(reply);
}

const BulkPublishRequest * BulkPublishResponse::request() const
{
    Q_D(const BulkPublishResponse);
    return static_cast<const BulkPublishRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync BulkPublish response.
 *
 * @param  response  Response to parse.
 */
void BulkPublishResponse::parseSuccess(QIODevice &response)
{
    Q_D(BulkPublishResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BulkPublishResponsePrivate
 *
 * @brief  Private implementation for BulkPublishResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BulkPublishResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BulkPublishResponse instance.
 */
BulkPublishResponsePrivate::BulkPublishResponsePrivate(
    BulkPublishResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync BulkPublishResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BulkPublishResponsePrivate::parseBulkPublishResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BulkPublishResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
