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

#include "clonestackresponse.h"
#include "clonestackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  CloneStackResponse
 *
 * @brief  Handles OpsWorks CloneStack responses.
 *
 * @see    OpsWorksClient::cloneStack
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CloneStackResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new CloneStackResponsePrivate(this), parent)
{
    setRequest(new CloneStackRequest(request));
    setReply(reply);
}

const CloneStackRequest * CloneStackResponse::request() const
{
    Q_D(const CloneStackResponse);
    return static_cast<const CloneStackRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks CloneStack response.
 *
 * @param  response  Response to parse.
 */
void CloneStackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CloneStackResponsePrivate
 *
 * @brief  Private implementation for CloneStackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloneStackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloneStackResponse instance.
 */
CloneStackResponsePrivate::CloneStackResponsePrivate(
    CloneStackQueueResponse * const q) : CloneStackPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks CloneStackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CloneStackResponsePrivate::CloneStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CloneStackResponse"));
    /// @todo
}
