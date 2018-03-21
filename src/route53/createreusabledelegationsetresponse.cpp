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

#include "createreusabledelegationsetresponse.h"
#include "createreusabledelegationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  CreateReusableDelegationSetResponse
 *
 * @brief  Handles Route53 CreateReusableDelegationSet responses.
 *
 * @see    Route53Client::createReusableDelegationSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReusableDelegationSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateReusableDelegationSetResponsePrivate(this), parent)
{
    setRequest(new CreateReusableDelegationSetRequest(request));
    setReply(reply);
}

const CreateReusableDelegationSetRequest * CreateReusableDelegationSetResponse::request() const
{
    Q_D(const CreateReusableDelegationSetResponse);
    return static_cast<const CreateReusableDelegationSetRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 CreateReusableDelegationSet response.
 *
 * @param  response  Response to parse.
 */
void CreateReusableDelegationSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReusableDelegationSetResponsePrivate
 *
 * @brief  Private implementation for CreateReusableDelegationSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReusableDelegationSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReusableDelegationSetResponse instance.
 */
CreateReusableDelegationSetResponsePrivate::CreateReusableDelegationSetResponsePrivate(
    CreateReusableDelegationSetQueueResponse * const q) : CreateReusableDelegationSetPrivate(q)
{

}

/**
 * @brief  Parse an Route53 CreateReusableDelegationSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReusableDelegationSetResponsePrivate::CreateReusableDelegationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReusableDelegationSetResponse"));
    /// @todo
}
