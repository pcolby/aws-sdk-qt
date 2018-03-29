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

#include "modifyeventsubscriptionresponse.h"
#include "modifyeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  ModifyEventSubscriptionResponse
 *
 * @brief  Handles Redshift ModifyEventSubscription responses.
 *
 * @see    RedshiftClient::modifyEventSubscription
 */

/**
 * @brief  Constructs a new ModifyEventSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyEventSubscriptionResponse::ModifyEventSubscriptionResponse(
        const ModifyEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ModifyEventSubscriptionResponse(new ModifyEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new ModifyEventSubscriptionRequest(request));
    setReply(reply);
}

const ModifyEventSubscriptionRequest * ModifyEventSubscriptionResponse::request() const
{
    Q_D(const ModifyEventSubscriptionResponse);
    return static_cast<const ModifyEventSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift ModifyEventSubscription response.
 *
 * @param  response  Response to parse.
 */
void ModifyEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyEventSubscriptionResponsePrivate
 *
 * @brief  Private implementation for ModifyEventSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyEventSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyEventSubscriptionResponse instance.
 */
ModifyEventSubscriptionResponsePrivate::ModifyEventSubscriptionResponsePrivate(
    ModifyEventSubscriptionResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift ModifyEventSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyEventSubscriptionResponsePrivate::parseModifyEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyEventSubscriptionResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
