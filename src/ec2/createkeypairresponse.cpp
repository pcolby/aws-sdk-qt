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

#include "createkeypairresponse.h"
#include "createkeypairresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateKeyPairResponse
 *
 * @brief  Handles EC2 CreateKeyPair responses.
 *
 * @see    EC2Client::createKeyPair
 */

/**
 * @brief  Constructs a new CreateKeyPairResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateKeyPairResponse::CreateKeyPairResponse(
        const CreateKeyPairRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateKeyPairResponsePrivate(this), parent)
{
    setRequest(new CreateKeyPairRequest(request));
    setReply(reply);
}

const CreateKeyPairRequest * CreateKeyPairResponse::request() const
{
    Q_D(const CreateKeyPairResponse);
    return static_cast<const CreateKeyPairRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateKeyPair response.
 *
 * @param  response  Response to parse.
 */
void CreateKeyPairResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateKeyPairResponsePrivate
 *
 * @brief  Private implementation for CreateKeyPairResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeyPairResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateKeyPairResponse instance.
 */
CreateKeyPairResponsePrivate::CreateKeyPairResponsePrivate(
    CreateKeyPairQueueResponse * const q) : CreateKeyPairPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateKeyPairResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateKeyPairResponsePrivate::CreateKeyPairResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKeyPairResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
