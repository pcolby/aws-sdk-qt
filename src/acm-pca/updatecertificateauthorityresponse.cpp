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

#include "updatecertificateauthorityresponse.h"
#include "updatecertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  UpdateCertificateAuthorityResponse
 *
 * @brief  Handles ACMPCA UpdateCertificateAuthority responses.
 *
 * @see    ACMPCAClient::updateCertificateAuthority
 */

/**
 * @brief  Constructs a new UpdateCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCertificateAuthorityResponse::UpdateCertificateAuthorityResponse(
        const UpdateCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new UpdateCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new UpdateCertificateAuthorityRequest(request));
    setReply(reply);
}

const UpdateCertificateAuthorityRequest * UpdateCertificateAuthorityResponse::request() const
{
    Q_D(const UpdateCertificateAuthorityResponse);
    return static_cast<const UpdateCertificateAuthorityRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA UpdateCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void UpdateCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCertificateAuthorityResponsePrivate
 *
 * @brief  Private implementation for UpdateCertificateAuthorityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCertificateAuthorityResponse instance.
 */
UpdateCertificateAuthorityResponsePrivate::UpdateCertificateAuthorityResponsePrivate(
    UpdateCertificateAuthorityResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA UpdateCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCertificateAuthorityResponsePrivate::parseUpdateCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCertificateAuthorityResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
