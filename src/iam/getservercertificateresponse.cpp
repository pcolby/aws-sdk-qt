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

#include "getservercertificateresponse.h"
#include "getservercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetServerCertificateResponse
 *
 * @brief  Handles IAM GetServerCertificate responses.
 *
 * @see    IAMClient::getServerCertificate
 */

/**
 * @brief  Constructs a new GetServerCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetServerCertificateResponse::GetServerCertificateResponse(
        const GetServerCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetServerCertificateResponsePrivate(this), parent)
{
    setRequest(new GetServerCertificateRequest(request));
    setReply(reply);
}

const GetServerCertificateRequest * GetServerCertificateResponse::request() const
{
    Q_D(const GetServerCertificateResponse);
    return static_cast<const GetServerCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetServerCertificate response.
 *
 * @param  response  Response to parse.
 */
void GetServerCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetServerCertificateResponsePrivate
 *
 * @brief  Private implementation for GetServerCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServerCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetServerCertificateResponse instance.
 */
GetServerCertificateResponsePrivate::GetServerCertificateResponsePrivate(
    GetServerCertificateQueueResponse * const q) : GetServerCertificatePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetServerCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetServerCertificateResponsePrivate::GetServerCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServerCertificateResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
