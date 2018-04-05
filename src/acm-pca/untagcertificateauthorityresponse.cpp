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

#include "untagcertificateauthorityresponse.h"
#include "untagcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  UntagCertificateAuthorityResponse
 *
 * @brief  Handles ACMPCA UntagCertificateAuthority responses.
 *
 * @see    ACMPCAClient::untagCertificateAuthority
 */

/**
 * @brief  Constructs a new UntagCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagCertificateAuthorityResponse::UntagCertificateAuthorityResponse(
        const UntagCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new UntagCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new UntagCertificateAuthorityRequest(request));
    setReply(reply);
}

const UntagCertificateAuthorityRequest * UntagCertificateAuthorityResponse::request() const
{
    Q_D(const UntagCertificateAuthorityResponse);
    return static_cast<const UntagCertificateAuthorityRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA UntagCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void UntagCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(UntagCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UntagCertificateAuthorityResponsePrivate
 *
 * @brief  Private implementation for UntagCertificateAuthorityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagCertificateAuthorityResponse instance.
 */
UntagCertificateAuthorityResponsePrivate::UntagCertificateAuthorityResponsePrivate(
    UntagCertificateAuthorityResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA UntagCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagCertificateAuthorityResponsePrivate::parseUntagCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagCertificateAuthorityResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
