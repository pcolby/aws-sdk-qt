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

#include "requestuploadcredentialsresponse.h"
#include "requestuploadcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  RequestUploadCredentialsResponse
 *
 * @brief  Handles GameLift RequestUploadCredentials responses.
 *
 * @see    GameLiftClient::requestUploadCredentials
 */

/**
 * @brief  Constructs a new RequestUploadCredentialsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestUploadCredentialsResponse::RequestUploadCredentialsResponse(
        const RequestUploadCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new RequestUploadCredentialsResponsePrivate(this), parent)
{
    setRequest(new RequestUploadCredentialsRequest(request));
    setReply(reply);
}

const RequestUploadCredentialsRequest * RequestUploadCredentialsResponse::request() const
{
    Q_D(const RequestUploadCredentialsResponse);
    return static_cast<const RequestUploadCredentialsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift RequestUploadCredentials response.
 *
 * @param  response  Response to parse.
 */
void RequestUploadCredentialsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RequestUploadCredentialsResponsePrivate
 *
 * @brief  Private implementation for RequestUploadCredentialsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestUploadCredentialsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RequestUploadCredentialsResponse instance.
 */
RequestUploadCredentialsResponsePrivate::RequestUploadCredentialsResponsePrivate(
    RequestUploadCredentialsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift RequestUploadCredentialsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RequestUploadCredentialsResponsePrivate::RequestUploadCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestUploadCredentialsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
