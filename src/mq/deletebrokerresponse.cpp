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

#include "deletebrokerresponse.h"
#include "deletebrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/**
 * @class  DeleteBrokerResponse
 *
 * @brief  Handles MQ DeleteBroker responses.
 *
 * @see    MQClient::deleteBroker
 */

/**
 * @brief  Constructs a new DeleteBrokerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBrokerResponse::DeleteBrokerResponse(
        const DeleteBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new DeleteBrokerResponsePrivate(this), parent)
{
    setRequest(new DeleteBrokerRequest(request));
    setReply(reply);
}

const DeleteBrokerRequest * DeleteBrokerResponse::request() const
{
    Q_D(const DeleteBrokerResponse);
    return static_cast<const DeleteBrokerRequest *>(d->request);
}

/**
 * @brief  Parse a MQ DeleteBroker response.
 *
 * @param  response  Response to parse.
 */
void DeleteBrokerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBrokerResponsePrivate
 *
 * @brief  Private implementation for DeleteBrokerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBrokerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBrokerResponse instance.
 */
DeleteBrokerResponsePrivate::DeleteBrokerResponsePrivate(
    DeleteBrokerQueueResponse * const q) : DeleteBrokerPrivate(q)
{

}

/**
 * @brief  Parse an MQ DeleteBrokerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBrokerResponsePrivate::DeleteBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBrokerResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
