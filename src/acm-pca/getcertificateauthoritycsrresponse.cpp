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

#include "getcertificateauthoritycsrresponse.h"
#include "getcertificateauthoritycsrresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  GetCertificateAuthorityCsrResponse
 *
 * @brief  Handles ACMPCA GetCertificateAuthorityCsr responses.
 *
 * @see    ACMPCAClient::getCertificateAuthorityCsr
 */

/**
 * @brief  Constructs a new GetCertificateAuthorityCsrResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCertificateAuthorityCsrResponse::GetCertificateAuthorityCsrResponse(
        const GetCertificateAuthorityCsrRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new GetCertificateAuthorityCsrResponsePrivate(this), parent)
{
    setRequest(new GetCertificateAuthorityCsrRequest(request));
    setReply(reply);
}

const GetCertificateAuthorityCsrRequest * GetCertificateAuthorityCsrResponse::request() const
{
    Q_D(const GetCertificateAuthorityCsrResponse);
    return static_cast<const GetCertificateAuthorityCsrRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA GetCertificateAuthorityCsr response.
 *
 * @param  response  Response to parse.
 */
void GetCertificateAuthorityCsrResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCertificateAuthorityCsrResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCertificateAuthorityCsrResponsePrivate
 *
 * @brief  Private implementation for GetCertificateAuthorityCsrResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateAuthorityCsrResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCertificateAuthorityCsrResponse instance.
 */
GetCertificateAuthorityCsrResponsePrivate::GetCertificateAuthorityCsrResponsePrivate(
    GetCertificateAuthorityCsrResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA GetCertificateAuthorityCsrResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCertificateAuthorityCsrResponsePrivate::parseGetCertificateAuthorityCsrResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCertificateAuthorityCsrResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
