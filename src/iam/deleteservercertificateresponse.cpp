/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteservercertificateresponse.h"
#include "deleteservercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeleteServerCertificateResponse
 *
 * @brief  Handles IAM DeleteServerCertificate responses.
 *
 * @see    IAMClient::deleteServerCertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServerCertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteServerCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteServerCertificateRequest(request));
    setReply(reply);
}

const DeleteServerCertificateRequest * DeleteServerCertificateResponse::request() const
{
    Q_D(const DeleteServerCertificateResponse);
    return static_cast<const DeleteServerCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteServerCertificate response.
 *
 * @param  response  Response to parse.
 */
void DeleteServerCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteServerCertificateResponsePrivate
 *
 * @brief  Private implementation for DeleteServerCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteServerCertificateResponse instance.
 */
DeleteServerCertificateResponsePrivate::DeleteServerCertificateResponsePrivate(
    DeleteServerCertificateQueueResponse * const q) : DeleteServerCertificatePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteServerCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteServerCertificateResponsePrivate::DeleteServerCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServerCertificateResponse"));
    /// @todo
}
