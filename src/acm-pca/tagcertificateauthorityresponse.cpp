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

#include "tagcertificateauthorityresponse.h"
#include "tagcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  TagCertificateAuthorityResponse
 *
 * @brief  Handles ACMPCA TagCertificateAuthority responses.
 *
 * @see    ACMPCAClient::tagCertificateAuthority
 */

/**
 * @brief  Constructs a new TagCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagCertificateAuthorityResponse::TagCertificateAuthorityResponse(
        const TagCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new TagCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new TagCertificateAuthorityRequest(request));
    setReply(reply);
}

const TagCertificateAuthorityRequest * TagCertificateAuthorityResponse::request() const
{
    Q_D(const TagCertificateAuthorityResponse);
    return static_cast<const TagCertificateAuthorityRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA TagCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void TagCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(TagCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TagCertificateAuthorityResponsePrivate
 *
 * @brief  Private implementation for TagCertificateAuthorityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TagCertificateAuthorityResponse instance.
 */
TagCertificateAuthorityResponsePrivate::TagCertificateAuthorityResponsePrivate(
    TagCertificateAuthorityResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA TagCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TagCertificateAuthorityResponsePrivate::parseTagCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagCertificateAuthorityResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
