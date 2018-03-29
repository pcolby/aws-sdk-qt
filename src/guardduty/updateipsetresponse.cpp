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

#include "updateipsetresponse.h"
#include "updateipsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  UpdateIPSetResponse
 *
 * @brief  Handles GuardDuty UpdateIPSet responses.
 *
 * @see    GuardDutyClient::updateIPSet
 */

/**
 * @brief  Constructs a new UpdateIPSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateIPSetResponse::UpdateIPSetResponse(
        const UpdateIPSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateIPSetResponse(new UpdateIPSetResponsePrivate(this), parent)
{
    setRequest(new UpdateIPSetRequest(request));
    setReply(reply);
}

const UpdateIPSetRequest * UpdateIPSetResponse::request() const
{
    Q_D(const UpdateIPSetResponse);
    return static_cast<const UpdateIPSetRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty UpdateIPSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateIPSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateIPSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateIPSetResponsePrivate
 *
 * @brief  Private implementation for UpdateIPSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIPSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateIPSetResponse instance.
 */
UpdateIPSetResponsePrivate::UpdateIPSetResponsePrivate(
    UpdateIPSetResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty UpdateIPSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateIPSetResponsePrivate::parseUpdateIPSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIPSetResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
