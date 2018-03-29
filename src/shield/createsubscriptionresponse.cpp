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

#include "createsubscriptionresponse.h"
#include "createsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/**
 * @class  CreateSubscriptionResponse
 *
 * @brief  Handles Shield CreateSubscription responses.
 *
 * @see    ShieldClient::createSubscription
 */

/**
 * @brief  Constructs a new CreateSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSubscriptionResponse::CreateSubscriptionResponse(
        const CreateSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateSubscriptionResponse(new CreateSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateSubscriptionRequest(request));
    setReply(reply);
}

const CreateSubscriptionRequest * CreateSubscriptionResponse::request() const
{
    Q_D(const CreateSubscriptionResponse);
    return static_cast<const CreateSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a Shield CreateSubscription response.
 *
 * @param  response  Response to parse.
 */
void CreateSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSubscriptionResponsePrivate
 *
 * @brief  Private implementation for CreateSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSubscriptionResponse instance.
 */
CreateSubscriptionResponsePrivate::CreateSubscriptionResponsePrivate(
    CreateSubscriptionResponse * const q) : ShieldResponsePrivate(q)
{

}

/**
 * @brief  Parse an Shield CreateSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSubscriptionResponsePrivate::parseCreateSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubscriptionResponse"));
    /// @todo
}

} // namespace Shield
} // namespace QtAws
