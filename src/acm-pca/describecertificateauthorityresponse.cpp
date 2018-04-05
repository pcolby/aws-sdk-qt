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

#include "describecertificateauthorityresponse.h"
#include "describecertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  DescribeCertificateAuthorityResponse
 *
 * @brief  Handles ACMPCA DescribeCertificateAuthority responses.
 *
 * @see    ACMPCAClient::describeCertificateAuthority
 */

/**
 * @brief  Constructs a new DescribeCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCertificateAuthorityResponse::DescribeCertificateAuthorityResponse(
        const DescribeCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new DescribeCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new DescribeCertificateAuthorityRequest(request));
    setReply(reply);
}

const DescribeCertificateAuthorityRequest * DescribeCertificateAuthorityResponse::request() const
{
    Q_D(const DescribeCertificateAuthorityResponse);
    return static_cast<const DescribeCertificateAuthorityRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA DescribeCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void DescribeCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCertificateAuthorityResponsePrivate
 *
 * @brief  Private implementation for DescribeCertificateAuthorityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCertificateAuthorityResponse instance.
 */
DescribeCertificateAuthorityResponsePrivate::DescribeCertificateAuthorityResponsePrivate(
    DescribeCertificateAuthorityResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA DescribeCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCertificateAuthorityResponsePrivate::parseDescribeCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificateAuthorityResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
