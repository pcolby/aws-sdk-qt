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

#include "resolvealiasresponse.h"
#include "resolvealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  ResolveAliasResponse
 *
 * @brief  Handles GameLift ResolveAlias responses.
 *
 * @see    GameLiftClient::resolveAlias
 */

/**
 * @brief  Constructs a new ResolveAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResolveAliasResponse::ResolveAliasResponse(
        const ResolveAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new ResolveAliasResponsePrivate(this), parent)
{
    setRequest(new ResolveAliasRequest(request));
    setReply(reply);
}

const ResolveAliasRequest * ResolveAliasResponse::request() const
{
    Q_D(const ResolveAliasResponse);
    return static_cast<const ResolveAliasRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift ResolveAlias response.
 *
 * @param  response  Response to parse.
 */
void ResolveAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResolveAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResolveAliasResponsePrivate
 *
 * @brief  Private implementation for ResolveAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResolveAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResolveAliasResponse instance.
 */
ResolveAliasResponsePrivate::ResolveAliasResponsePrivate(
    ResolveAliasResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift ResolveAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResolveAliasResponsePrivate::parseResolveAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResolveAliasResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
