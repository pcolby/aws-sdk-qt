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

#include "rotatechannelcredentialsresponse.h"
#include "rotatechannelcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/**
 * @class  RotateChannelCredentialsResponse
 *
 * @brief  Handles MediaPackage RotateChannelCredentials responses.
 *
 * @see    MediaPackageClient::rotateChannelCredentials
 */

/**
 * @brief  Constructs a new RotateChannelCredentialsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RotateChannelCredentialsResponse::RotateChannelCredentialsResponse(
        const RotateChannelCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new RotateChannelCredentialsResponsePrivate(this), parent)
{
    setRequest(new RotateChannelCredentialsRequest(request));
    setReply(reply);
}

const RotateChannelCredentialsRequest * RotateChannelCredentialsResponse::request() const
{
    Q_D(const RotateChannelCredentialsResponse);
    return static_cast<const RotateChannelCredentialsRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage RotateChannelCredentials response.
 *
 * @param  response  Response to parse.
 */
void RotateChannelCredentialsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RotateChannelCredentialsResponsePrivate
 *
 * @brief  Private implementation for RotateChannelCredentialsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RotateChannelCredentialsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RotateChannelCredentialsResponse instance.
 */
RotateChannelCredentialsResponsePrivate::RotateChannelCredentialsResponsePrivate(
    RotateChannelCredentialsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage RotateChannelCredentialsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RotateChannelCredentialsResponsePrivate::RotateChannelCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RotateChannelCredentialsResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace QtAws
