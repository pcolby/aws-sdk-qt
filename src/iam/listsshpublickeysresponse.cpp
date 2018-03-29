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

#include "listsshpublickeysresponse.h"
#include "listsshpublickeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListSSHPublicKeysResponse
 *
 * @brief  Handles IAM ListSSHPublicKeys responses.
 *
 * @see    IAMClient::listSSHPublicKeys
 */

/**
 * @brief  Constructs a new ListSSHPublicKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSSHPublicKeysResponse::ListSSHPublicKeysResponse(
        const ListSSHPublicKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListSSHPublicKeysResponsePrivate(this), parent)
{
    setRequest(new ListSSHPublicKeysRequest(request));
    setReply(reply);
}

const ListSSHPublicKeysRequest * ListSSHPublicKeysResponse::request() const
{
    Q_D(const ListSSHPublicKeysResponse);
    return static_cast<const ListSSHPublicKeysRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListSSHPublicKeys response.
 *
 * @param  response  Response to parse.
 */
void ListSSHPublicKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSSHPublicKeysResponsePrivate
 *
 * @brief  Private implementation for ListSSHPublicKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSSHPublicKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSSHPublicKeysResponse instance.
 */
ListSSHPublicKeysResponsePrivate::ListSSHPublicKeysResponsePrivate(
    ListSSHPublicKeysQueueResponse * const q) : ListSSHPublicKeysPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListSSHPublicKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSSHPublicKeysResponsePrivate::ListSSHPublicKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSSHPublicKeysResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
