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

#include "createcertificateauthorityresponse.h"
#include "createcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  CreateCertificateAuthorityResponse
 *
 * @brief  Handles ACMPCA CreateCertificateAuthority responses.
 *
 * @see    ACMPCAClient::createCertificateAuthority
 */

/**
 * @brief  Constructs a new CreateCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCertificateAuthorityResponse::CreateCertificateAuthorityResponse(
        const CreateCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new CreateCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new CreateCertificateAuthorityRequest(request));
    setReply(reply);
}

const CreateCertificateAuthorityRequest * CreateCertificateAuthorityResponse::request() const
{
    Q_D(const CreateCertificateAuthorityResponse);
    return static_cast<const CreateCertificateAuthorityRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA CreateCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void CreateCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCertificateAuthorityResponsePrivate
 *
 * @brief  Private implementation for CreateCertificateAuthorityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCertificateAuthorityResponse instance.
 */
CreateCertificateAuthorityResponsePrivate::CreateCertificateAuthorityResponsePrivate(
    CreateCertificateAuthorityResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA CreateCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCertificateAuthorityResponsePrivate::parseCreateCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCertificateAuthorityResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
