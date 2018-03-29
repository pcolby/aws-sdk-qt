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

#include "updateservercertificateresponse.h"
#include "updateservercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateServerCertificateResponse
 *
 * @brief  Handles IAM UpdateServerCertificate responses.
 *
 * @see    IAMClient::updateServerCertificate
 */

/**
 * @brief  Constructs a new UpdateServerCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServerCertificateResponse::UpdateServerCertificateResponse(
        const UpdateServerCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateServerCertificateResponse(new UpdateServerCertificateResponsePrivate(this), parent)
{
    setRequest(new UpdateServerCertificateRequest(request));
    setReply(reply);
}

const UpdateServerCertificateRequest * UpdateServerCertificateResponse::request() const
{
    Q_D(const UpdateServerCertificateResponse);
    return static_cast<const UpdateServerCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateServerCertificate response.
 *
 * @param  response  Response to parse.
 */
void UpdateServerCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateServerCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateServerCertificateResponsePrivate
 *
 * @brief  Private implementation for UpdateServerCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateServerCertificateResponse instance.
 */
UpdateServerCertificateResponsePrivate::UpdateServerCertificateResponsePrivate(
    UpdateServerCertificateResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateServerCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateServerCertificateResponsePrivate::parseUpdateServerCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerCertificateResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
