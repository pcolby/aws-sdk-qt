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

#include "deregisterfromworkmailresponse.h"
#include "deregisterfromworkmailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  DeregisterFromWorkMailResponse
 *
 * @brief  Handles WorkMail DeregisterFromWorkMail responses.
 *
 * @see    WorkMailClient::deregisterFromWorkMail
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterFromWorkMailResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DeregisterFromWorkMailResponsePrivate(this), parent)
{
    setRequest(new DeregisterFromWorkMailRequest(request));
    setReply(reply);
}

const DeregisterFromWorkMailRequest * DeregisterFromWorkMailResponse::request() const
{
    Q_D(const DeregisterFromWorkMailResponse);
    return static_cast<const DeregisterFromWorkMailRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DeregisterFromWorkMail response.
 *
 * @param  response  Response to parse.
 */
void DeregisterFromWorkMailResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterFromWorkMailResponsePrivate
 *
 * @brief  Private implementation for DeregisterFromWorkMailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterFromWorkMailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterFromWorkMailResponse instance.
 */
DeregisterFromWorkMailResponsePrivate::DeregisterFromWorkMailResponsePrivate(
    DeregisterFromWorkMailQueueResponse * const q) : DeregisterFromWorkMailPrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DeregisterFromWorkMailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterFromWorkMailResponsePrivate::DeregisterFromWorkMailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterFromWorkMailResponse"));
    /// @todo
}
