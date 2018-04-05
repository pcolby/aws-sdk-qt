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

#include "importcertificateauthoritycertificateresponse.h"
#include "importcertificateauthoritycertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  ImportCertificateAuthorityCertificateResponse
 *
 * @brief  Handles ACMPCA ImportCertificateAuthorityCertificate responses.
 *
 * @see    ACMPCAClient::importCertificateAuthorityCertificate
 */

/**
 * @brief  Constructs a new ImportCertificateAuthorityCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportCertificateAuthorityCertificateResponse::ImportCertificateAuthorityCertificateResponse(
        const ImportCertificateAuthorityCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new ImportCertificateAuthorityCertificateResponsePrivate(this), parent)
{
    setRequest(new ImportCertificateAuthorityCertificateRequest(request));
    setReply(reply);
}

const ImportCertificateAuthorityCertificateRequest * ImportCertificateAuthorityCertificateResponse::request() const
{
    Q_D(const ImportCertificateAuthorityCertificateResponse);
    return static_cast<const ImportCertificateAuthorityCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA ImportCertificateAuthorityCertificate response.
 *
 * @param  response  Response to parse.
 */
void ImportCertificateAuthorityCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportCertificateAuthorityCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportCertificateAuthorityCertificateResponsePrivate
 *
 * @brief  Private implementation for ImportCertificateAuthorityCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportCertificateAuthorityCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportCertificateAuthorityCertificateResponse instance.
 */
ImportCertificateAuthorityCertificateResponsePrivate::ImportCertificateAuthorityCertificateResponsePrivate(
    ImportCertificateAuthorityCertificateResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA ImportCertificateAuthorityCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportCertificateAuthorityCertificateResponsePrivate::parseImportCertificateAuthorityCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportCertificateAuthorityCertificateResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
