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

#include "deletecertificateauthorityresponse.h"
#include "deletecertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  DeleteCertificateAuthorityResponse
 *
 * @brief  Handles ACMPCA DeleteCertificateAuthority responses.
 *
 * @see    ACMPCAClient::deleteCertificateAuthority
 */

/**
 * @brief  Constructs a new DeleteCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCertificateAuthorityResponse::DeleteCertificateAuthorityResponse(
        const DeleteCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new DeleteCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new DeleteCertificateAuthorityRequest(request));
    setReply(reply);
}

const DeleteCertificateAuthorityRequest * DeleteCertificateAuthorityResponse::request() const
{
    Q_D(const DeleteCertificateAuthorityResponse);
    return static_cast<const DeleteCertificateAuthorityRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA DeleteCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void DeleteCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCertificateAuthorityResponsePrivate
 *
 * @brief  Private implementation for DeleteCertificateAuthorityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCertificateAuthorityResponse instance.
 */
DeleteCertificateAuthorityResponsePrivate::DeleteCertificateAuthorityResponsePrivate(
    DeleteCertificateAuthorityResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA DeleteCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCertificateAuthorityResponsePrivate::parseDeleteCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCertificateAuthorityResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
