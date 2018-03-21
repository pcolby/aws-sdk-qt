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

#include "updateappresponse.h"
#include "updateappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  UpdateAppResponse
 *
 * @brief  Handles OpsWorks UpdateApp responses.
 *
 * @see    OpsWorksClient::updateApp
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAppResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UpdateAppResponsePrivate(this), parent)
{
    setRequest(new UpdateAppRequest(request));
    setReply(reply);
}

const UpdateAppRequest * UpdateAppResponse::request() const
{
    Q_D(const UpdateAppResponse);
    return static_cast<const UpdateAppRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UpdateApp response.
 *
 * @param  response  Response to parse.
 */
void UpdateAppResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAppResponsePrivate
 *
 * @brief  Private implementation for UpdateAppResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAppResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAppResponse instance.
 */
UpdateAppResponsePrivate::UpdateAppResponsePrivate(
    UpdateAppQueueResponse * const q) : UpdateAppPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UpdateAppResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAppResponsePrivate::UpdateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppResponse"));
    /// @todo
}
