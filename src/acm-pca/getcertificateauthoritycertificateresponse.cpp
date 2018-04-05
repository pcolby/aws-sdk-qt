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

#include "getcertificateauthoritycertificateresponse.h"
#include "getcertificateauthoritycertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  GetCertificateAuthorityCertificateResponse
 *
 * @brief  Handles ACMPCA GetCertificateAuthorityCertificate responses.
 *
 * @see    ACMPCAClient::getCertificateAuthorityCertificate
 */

/**
 * @brief  Constructs a new GetCertificateAuthorityCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCertificateAuthorityCertificateResponse::GetCertificateAuthorityCertificateResponse(
        const GetCertificateAuthorityCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new GetCertificateAuthorityCertificateResponsePrivate(this), parent)
{
    setRequest(new GetCertificateAuthorityCertificateRequest(request));
    setReply(reply);
}

const GetCertificateAuthorityCertificateRequest * GetCertificateAuthorityCertificateResponse::request() const
{
    Q_D(const GetCertificateAuthorityCertificateResponse);
    return static_cast<const GetCertificateAuthorityCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA GetCertificateAuthorityCertificate response.
 *
 * @param  response  Response to parse.
 */
void GetCertificateAuthorityCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCertificateAuthorityCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCertificateAuthorityCertificateResponsePrivate
 *
 * @brief  Private implementation for GetCertificateAuthorityCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateAuthorityCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCertificateAuthorityCertificateResponse instance.
 */
GetCertificateAuthorityCertificateResponsePrivate::GetCertificateAuthorityCertificateResponsePrivate(
    GetCertificateAuthorityCertificateResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA GetCertificateAuthorityCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCertificateAuthorityCertificateResponsePrivate::parseGetCertificateAuthorityCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCertificateAuthorityCertificateResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
