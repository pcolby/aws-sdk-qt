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

#include "updatebrokerresponse.h"
#include "updatebrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/**
 * @class  UpdateBrokerResponse
 *
 * @brief  Handles MQ UpdateBroker responses.
 *
 * @see    MQClient::updateBroker
 */

/**
 * @brief  Constructs a new UpdateBrokerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBrokerResponse::UpdateBrokerResponse(
        const UpdateBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateBrokerResponse(new UpdateBrokerResponsePrivate(this), parent)
{
    setRequest(new UpdateBrokerRequest(request));
    setReply(reply);
}

const UpdateBrokerRequest * UpdateBrokerResponse::request() const
{
    Q_D(const UpdateBrokerResponse);
    return static_cast<const UpdateBrokerRequest *>(d->request);
}

/**
 * @brief  Parse a MQ UpdateBroker response.
 *
 * @param  response  Response to parse.
 */
void UpdateBrokerResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateBrokerResponsePrivate
 *
 * @brief  Private implementation for UpdateBrokerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBrokerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateBrokerResponse instance.
 */
UpdateBrokerResponsePrivate::UpdateBrokerResponsePrivate(
    UpdateBrokerResponse * const q) : MQResponsePrivate(q)
{

}

/**
 * @brief  Parse an MQ UpdateBrokerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateBrokerResponsePrivate::parseUpdateBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBrokerResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
