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

#include "updatejobresponse.h"
#include "updatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Snowball {

/**
 * @class  UpdateJobResponse
 *
 * @brief  Handles Snowball UpdateJob responses.
 *
 * @see    SnowballClient::updateJob
 */

/**
 * @brief  Constructs a new UpdateJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateJobResponse::UpdateJobResponse(
        const UpdateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new UpdateJobResponsePrivate(this), parent)
{
    setRequest(new UpdateJobRequest(request));
    setReply(reply);
}

const UpdateJobRequest * UpdateJobResponse::request() const
{
    Q_D(const UpdateJobResponse);
    return static_cast<const UpdateJobRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball UpdateJob response.
 *
 * @param  response  Response to parse.
 */
void UpdateJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateJobResponsePrivate
 *
 * @brief  Private implementation for UpdateJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateJobResponse instance.
 */
UpdateJobResponsePrivate::UpdateJobResponsePrivate(
    UpdateJobQueueResponse * const q) : UpdateJobPrivate(q)
{

}

/**
 * @brief  Parse an Snowball UpdateJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateJobResponsePrivate::UpdateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace AWS
