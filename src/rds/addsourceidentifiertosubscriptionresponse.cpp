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

#include "addsourceidentifiertosubscriptionresponse.h"
#include "addsourceidentifiertosubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  AddSourceIdentifierToSubscriptionResponse
 *
 * @brief  Handles RDS AddSourceIdentifierToSubscription responses.
 *
 * @see    RDSClient::addSourceIdentifierToSubscription
 */

/**
 * @brief  Constructs a new AddSourceIdentifierToSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddSourceIdentifierToSubscriptionResponse::AddSourceIdentifierToSubscriptionResponse(
        const AddSourceIdentifierToSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new AddSourceIdentifierToSubscriptionResponsePrivate(this), parent)
{
    setRequest(new AddSourceIdentifierToSubscriptionRequest(request));
    setReply(reply);
}

const AddSourceIdentifierToSubscriptionRequest * AddSourceIdentifierToSubscriptionResponse::request() const
{
    Q_D(const AddSourceIdentifierToSubscriptionResponse);
    return static_cast<const AddSourceIdentifierToSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a RDS AddSourceIdentifierToSubscription response.
 *
 * @param  response  Response to parse.
 */
void AddSourceIdentifierToSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddSourceIdentifierToSubscriptionResponsePrivate
 *
 * @brief  Private implementation for AddSourceIdentifierToSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddSourceIdentifierToSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddSourceIdentifierToSubscriptionResponse instance.
 */
AddSourceIdentifierToSubscriptionResponsePrivate::AddSourceIdentifierToSubscriptionResponsePrivate(
    AddSourceIdentifierToSubscriptionResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS AddSourceIdentifierToSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddSourceIdentifierToSubscriptionResponsePrivate::AddSourceIdentifierToSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddSourceIdentifierToSubscriptionResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
