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

#include "downloaddefaultkeypairresponse.h"
#include "downloaddefaultkeypairresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  DownloadDefaultKeyPairResponse
 *
 * @brief  Handles Lightsail DownloadDefaultKeyPair responses.
 *
 * @see    LightsailClient::downloadDefaultKeyPair
 */

/**
 * @brief  Constructs a new DownloadDefaultKeyPairResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DownloadDefaultKeyPairResponse::DownloadDefaultKeyPairResponse(
        const DownloadDefaultKeyPairRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DownloadDefaultKeyPairResponsePrivate(this), parent)
{
    setRequest(new DownloadDefaultKeyPairRequest(request));
    setReply(reply);
}

const DownloadDefaultKeyPairRequest * DownloadDefaultKeyPairResponse::request() const
{
    Q_D(const DownloadDefaultKeyPairResponse);
    return static_cast<const DownloadDefaultKeyPairRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DownloadDefaultKeyPair response.
 *
 * @param  response  Response to parse.
 */
void DownloadDefaultKeyPairResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DownloadDefaultKeyPairResponsePrivate
 *
 * @brief  Private implementation for DownloadDefaultKeyPairResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DownloadDefaultKeyPairResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DownloadDefaultKeyPairResponse instance.
 */
DownloadDefaultKeyPairResponsePrivate::DownloadDefaultKeyPairResponsePrivate(
    DownloadDefaultKeyPairResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DownloadDefaultKeyPairResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DownloadDefaultKeyPairResponsePrivate::DownloadDefaultKeyPairResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DownloadDefaultKeyPairResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
