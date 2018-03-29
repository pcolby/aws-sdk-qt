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

#include "deletecertificateresponse.h"
#include "deletecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ACM {

/**
 * @class  DeleteCertificateResponse
 *
 * @brief  Handles ACM DeleteCertificate responses.
 *
 * @see    ACMClient::deleteCertificate
 */

/**
 * @brief  Constructs a new DeleteCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCertificateResponse::DeleteCertificateResponse(
        const DeleteCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new DeleteCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteCertificateRequest(request));
    setReply(reply);
}

const DeleteCertificateRequest * DeleteCertificateResponse::request() const
{
    Q_D(const DeleteCertificateResponse);
    return static_cast<const DeleteCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACM DeleteCertificate response.
 *
 * @param  response  Response to parse.
 */
void DeleteCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCertificateResponsePrivate
 *
 * @brief  Private implementation for DeleteCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCertificateResponse instance.
 */
DeleteCertificateResponsePrivate::DeleteCertificateResponsePrivate(
    DeleteCertificateQueueResponse * const q) : DeleteCertificatePrivate(q)
{

}

/**
 * @brief  Parse an ACM DeleteCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCertificateResponsePrivate::DeleteCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace AWS
