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

#include "uploadsigningcertificateresponse.h"
#include "uploadsigningcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UploadSigningCertificateResponse
 *
 * @brief  Handles IAM UploadSigningCertificate responses.
 *
 * @see    IAMClient::uploadSigningCertificate
 */

/**
 * @brief  Constructs a new UploadSigningCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadSigningCertificateResponse::UploadSigningCertificateResponse(
        const UploadSigningCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UploadSigningCertificateResponsePrivate(this), parent)
{
    setRequest(new UploadSigningCertificateRequest(request));
    setReply(reply);
}

const UploadSigningCertificateRequest * UploadSigningCertificateResponse::request() const
{
    Q_D(const UploadSigningCertificateResponse);
    return static_cast<const UploadSigningCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UploadSigningCertificate response.
 *
 * @param  response  Response to parse.
 */
void UploadSigningCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadSigningCertificateResponsePrivate
 *
 * @brief  Private implementation for UploadSigningCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadSigningCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadSigningCertificateResponse instance.
 */
UploadSigningCertificateResponsePrivate::UploadSigningCertificateResponsePrivate(
    UploadSigningCertificateQueueResponse * const q) : UploadSigningCertificatePrivate(q)
{

}

/**
 * @brief  Parse an IAM UploadSigningCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadSigningCertificateResponsePrivate::UploadSigningCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadSigningCertificateResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
