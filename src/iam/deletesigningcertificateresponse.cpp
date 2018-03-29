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

#include "deletesigningcertificateresponse.h"
#include "deletesigningcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteSigningCertificateResponse
 *
 * @brief  Handles IAM DeleteSigningCertificate responses.
 *
 * @see    IAMClient::deleteSigningCertificate
 */

/**
 * @brief  Constructs a new DeleteSigningCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSigningCertificateResponse::DeleteSigningCertificateResponse(
        const DeleteSigningCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteSigningCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteSigningCertificateRequest(request));
    setReply(reply);
}

const DeleteSigningCertificateRequest * DeleteSigningCertificateResponse::request() const
{
    Q_D(const DeleteSigningCertificateResponse);
    return static_cast<const DeleteSigningCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteSigningCertificate response.
 *
 * @param  response  Response to parse.
 */
void DeleteSigningCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSigningCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSigningCertificateResponsePrivate
 *
 * @brief  Private implementation for DeleteSigningCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSigningCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSigningCertificateResponse instance.
 */
DeleteSigningCertificateResponsePrivate::DeleteSigningCertificateResponsePrivate(
    DeleteSigningCertificateResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteSigningCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSigningCertificateResponsePrivate::DeleteSigningCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSigningCertificateResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
