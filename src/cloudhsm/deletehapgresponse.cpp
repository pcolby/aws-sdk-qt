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

#include "deletehapgresponse.h"
#include "deletehapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSM {

/**
 * @class  DeleteHapgResponse
 *
 * @brief  Handles CloudHSM DeleteHapg responses.
 *
 * @see    CloudHSMClient::deleteHapg
 */

/**
 * @brief  Constructs a new DeleteHapgResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHapgResponse::DeleteHapgResponse(
        const DeleteHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DeleteHapgResponsePrivate(this), parent)
{
    setRequest(new DeleteHapgRequest(request));
    setReply(reply);
}

const DeleteHapgRequest * DeleteHapgResponse::request() const
{
    Q_D(const DeleteHapgResponse);
    return static_cast<const DeleteHapgRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM DeleteHapg response.
 *
 * @param  response  Response to parse.
 */
void DeleteHapgResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteHapgResponsePrivate
 *
 * @brief  Private implementation for DeleteHapgResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHapgResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHapgResponse instance.
 */
DeleteHapgResponsePrivate::DeleteHapgResponsePrivate(
    DeleteHapgQueueResponse * const q) : DeleteHapgPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM DeleteHapgResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHapgResponsePrivate::DeleteHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHapgResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace AWS
