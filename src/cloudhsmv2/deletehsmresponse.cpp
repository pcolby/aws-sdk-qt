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

#include "deletehsmresponse.h"
#include "deletehsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSMV2 {

/**
 * @class  DeleteHsmResponse
 *
 * @brief  Handles CloudHSMV2 DeleteHsm responses.
 *
 * @see    CloudHSMV2Client::deleteHsm
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHsmResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new DeleteHsmResponsePrivate(this), parent)
{
    setRequest(new DeleteHsmRequest(request));
    setReply(reply);
}

const DeleteHsmRequest * DeleteHsmResponse::request() const
{
    Q_D(const DeleteHsmResponse);
    return static_cast<const DeleteHsmRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSMV2 DeleteHsm response.
 *
 * @param  response  Response to parse.
 */
void DeleteHsmResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteHsmResponsePrivate
 *
 * @brief  Private implementation for DeleteHsmResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHsmResponse instance.
 */
DeleteHsmResponsePrivate::DeleteHsmResponsePrivate(
    DeleteHsmQueueResponse * const q) : DeleteHsmPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSMV2 DeleteHsmResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHsmResponsePrivate::DeleteHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHsmResponse"));
    /// @todo
}

} // namespace CloudHSMV2
} // namespace AWS
