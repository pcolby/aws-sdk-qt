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

#include "createbrokerresponse.h"
#include "createbrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MQ {

/**
 * @class  CreateBrokerResponse
 *
 * @brief  Handles MQ CreateBroker responses.
 *
 * @see    MQClient::createBroker
 */

/**
 * @brief  Constructs a new CreateBrokerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBrokerResponse::CreateBrokerResponse(
        const CreateBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new CreateBrokerResponsePrivate(this), parent)
{
    setRequest(new CreateBrokerRequest(request));
    setReply(reply);
}

const CreateBrokerRequest * CreateBrokerResponse::request() const
{
    Q_D(const CreateBrokerResponse);
    return static_cast<const CreateBrokerRequest *>(d->request);
}

/**
 * @brief  Parse a MQ CreateBroker response.
 *
 * @param  response  Response to parse.
 */
void CreateBrokerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateBrokerResponsePrivate
 *
 * @brief  Private implementation for CreateBrokerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBrokerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBrokerResponse instance.
 */
CreateBrokerResponsePrivate::CreateBrokerResponsePrivate(
    CreateBrokerQueueResponse * const q) : CreateBrokerPrivate(q)
{

}

/**
 * @brief  Parse an MQ CreateBrokerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBrokerResponsePrivate::CreateBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBrokerResponse"));
    /// @todo
}

} // namespace MQ
} // namespace AWS
