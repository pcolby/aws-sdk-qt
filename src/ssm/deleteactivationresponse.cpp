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

#include "deleteactivationresponse.h"
#include "deleteactivationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DeleteActivationResponse
 *
 * @brief  Handles SSM DeleteActivation responses.
 *
 * @see    SSMClient::deleteActivation
 */

/**
 * @brief  Constructs a new DeleteActivationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteActivationResponse::DeleteActivationResponse(
        const DeleteActivationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeleteActivationResponsePrivate(this), parent)
{
    setRequest(new DeleteActivationRequest(request));
    setReply(reply);
}

const DeleteActivationRequest * DeleteActivationResponse::request() const
{
    Q_D(const DeleteActivationResponse);
    return static_cast<const DeleteActivationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeleteActivation response.
 *
 * @param  response  Response to parse.
 */
void DeleteActivationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteActivationResponsePrivate
 *
 * @brief  Private implementation for DeleteActivationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteActivationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteActivationResponse instance.
 */
DeleteActivationResponsePrivate::DeleteActivationResponsePrivate(
    DeleteActivationResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DeleteActivationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteActivationResponsePrivate::DeleteActivationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteActivationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
