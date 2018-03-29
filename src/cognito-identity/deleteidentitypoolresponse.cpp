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

#include "deleteidentitypoolresponse.h"
#include "deleteidentitypoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  DeleteIdentityPoolResponse
 *
 * @brief  Handles CognitoIdentity DeleteIdentityPool responses.
 *
 * @see    CognitoIdentityClient::deleteIdentityPool
 */

/**
 * @brief  Constructs a new DeleteIdentityPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIdentityPoolResponse::DeleteIdentityPoolResponse(
        const DeleteIdentityPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new DeleteIdentityPoolResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityPoolRequest(request));
    setReply(reply);
}

const DeleteIdentityPoolRequest * DeleteIdentityPoolResponse::request() const
{
    Q_D(const DeleteIdentityPoolResponse);
    return static_cast<const DeleteIdentityPoolRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity DeleteIdentityPool response.
 *
 * @param  response  Response to parse.
 */
void DeleteIdentityPoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteIdentityPoolResponsePrivate
 *
 * @brief  Private implementation for DeleteIdentityPoolResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityPoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIdentityPoolResponse instance.
 */
DeleteIdentityPoolResponsePrivate::DeleteIdentityPoolResponsePrivate(
    DeleteIdentityPoolQueueResponse * const q) : DeleteIdentityPoolPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity DeleteIdentityPoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIdentityPoolResponsePrivate::DeleteIdentityPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityPoolResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
