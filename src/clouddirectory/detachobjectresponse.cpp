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

#include "detachobjectresponse.h"
#include "detachobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DetachObjectResponse
 *
 * @brief  Handles CloudDirectory DetachObject responses.
 *
 * @see    CloudDirectoryClient::detachObject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachObjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DetachObjectResponsePrivate(this), parent)
{
    setRequest(new DetachObjectRequest(request));
    setReply(reply);
}

const DetachObjectRequest * DetachObjectResponse::request() const
{
    Q_D(const DetachObjectResponse);
    return static_cast<const DetachObjectRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory DetachObject response.
 *
 * @param  response  Response to parse.
 */
void DetachObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachObjectResponsePrivate
 *
 * @brief  Private implementation for DetachObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachObjectResponse instance.
 */
DetachObjectResponsePrivate::DetachObjectResponsePrivate(
    DetachObjectQueueResponse * const q) : DetachObjectPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory DetachObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachObjectResponsePrivate::DetachObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachObjectResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
