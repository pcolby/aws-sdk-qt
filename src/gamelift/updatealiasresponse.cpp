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

#include "updatealiasresponse.h"
#include "updatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  UpdateAliasResponse
 *
 * @brief  Handles GameLift UpdateAlias responses.
 *
 * @see    GameLiftClient::updateAlias
 */

/**
 * @brief  Constructs a new UpdateAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAliasResponse::UpdateAliasResponse(
        const UpdateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateAliasResponse(new UpdateAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateAliasRequest(request));
    setReply(reply);
}

const UpdateAliasRequest * UpdateAliasResponse::request() const
{
    Q_D(const UpdateAliasResponse);
    return static_cast<const UpdateAliasRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateAlias response.
 *
 * @param  response  Response to parse.
 */
void UpdateAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAliasResponsePrivate
 *
 * @brief  Private implementation for UpdateAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAliasResponse instance.
 */
UpdateAliasResponsePrivate::UpdateAliasResponsePrivate(
    UpdateAliasResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAliasResponsePrivate::parseUpdateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAliasResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
