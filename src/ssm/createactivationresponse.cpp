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

#include "createactivationresponse.h"
#include "createactivationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  CreateActivationResponse
 *
 * @brief  Handles SSM CreateActivation responses.
 *
 * @see    SSMClient::createActivation
 */

/**
 * @brief  Constructs a new CreateActivationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateActivationResponse::CreateActivationResponse(
        const CreateActivationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreateActivationResponsePrivate(this), parent)
{
    setRequest(new CreateActivationRequest(request));
    setReply(reply);
}

const CreateActivationRequest * CreateActivationResponse::request() const
{
    Q_D(const CreateActivationResponse);
    return static_cast<const CreateActivationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CreateActivation response.
 *
 * @param  response  Response to parse.
 */
void CreateActivationResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateActivationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateActivationResponsePrivate
 *
 * @brief  Private implementation for CreateActivationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateActivationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateActivationResponse instance.
 */
CreateActivationResponsePrivate::CreateActivationResponsePrivate(
    CreateActivationResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM CreateActivationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateActivationResponsePrivate::CreateActivationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateActivationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
