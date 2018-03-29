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

#include "updatesigningcertificateresponse.h"
#include "updatesigningcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateSigningCertificateResponse
 *
 * @brief  Handles IAM UpdateSigningCertificate responses.
 *
 * @see    IAMClient::updateSigningCertificate
 */

/**
 * @brief  Constructs a new UpdateSigningCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSigningCertificateResponse::UpdateSigningCertificateResponse(
        const UpdateSigningCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateSigningCertificateResponse(new UpdateSigningCertificateResponsePrivate(this), parent)
{
    setRequest(new UpdateSigningCertificateRequest(request));
    setReply(reply);
}

const UpdateSigningCertificateRequest * UpdateSigningCertificateResponse::request() const
{
    Q_D(const UpdateSigningCertificateResponse);
    return static_cast<const UpdateSigningCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateSigningCertificate response.
 *
 * @param  response  Response to parse.
 */
void UpdateSigningCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSigningCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSigningCertificateResponsePrivate
 *
 * @brief  Private implementation for UpdateSigningCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSigningCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSigningCertificateResponse instance.
 */
UpdateSigningCertificateResponsePrivate::UpdateSigningCertificateResponsePrivate(
    UpdateSigningCertificateResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateSigningCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSigningCertificateResponsePrivate::parseUpdateSigningCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSigningCertificateResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
