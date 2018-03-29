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

#include "deleteidentitiesresponse.h"
#include "deleteidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  DeleteIdentitiesResponse
 *
 * @brief  Handles CognitoIdentity DeleteIdentities responses.
 *
 * @see    CognitoIdentityClient::deleteIdentities
 */

/**
 * @brief  Constructs a new DeleteIdentitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIdentitiesResponse::DeleteIdentitiesResponse(
        const DeleteIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new DeleteIdentitiesResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentitiesRequest(request));
    setReply(reply);
}

const DeleteIdentitiesRequest * DeleteIdentitiesResponse::request() const
{
    Q_D(const DeleteIdentitiesResponse);
    return static_cast<const DeleteIdentitiesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity DeleteIdentities response.
 *
 * @param  response  Response to parse.
 */
void DeleteIdentitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteIdentitiesResponsePrivate
 *
 * @brief  Private implementation for DeleteIdentitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIdentitiesResponse instance.
 */
DeleteIdentitiesResponsePrivate::DeleteIdentitiesResponsePrivate(
    DeleteIdentitiesQueueResponse * const q) : DeleteIdentitiesPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity DeleteIdentitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIdentitiesResponsePrivate::DeleteIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentitiesResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace AWS
