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

#include "deletehsmclientcertificateresponse.h"
#include "deletehsmclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DeleteHsmClientCertificateResponse
 *
 * @brief  Handles Redshift DeleteHsmClientCertificate responses.
 *
 * @see    RedshiftClient::deleteHsmClientCertificate
 */

/**
 * @brief  Constructs a new DeleteHsmClientCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHsmClientCertificateResponse::DeleteHsmClientCertificateResponse(
        const DeleteHsmClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteHsmClientCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteHsmClientCertificateRequest(request));
    setReply(reply);
}

const DeleteHsmClientCertificateRequest * DeleteHsmClientCertificateResponse::request() const
{
    Q_D(const DeleteHsmClientCertificateResponse);
    return static_cast<const DeleteHsmClientCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteHsmClientCertificate response.
 *
 * @param  response  Response to parse.
 */
void DeleteHsmClientCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteHsmClientCertificateResponsePrivate
 *
 * @brief  Private implementation for DeleteHsmClientCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmClientCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHsmClientCertificateResponse instance.
 */
DeleteHsmClientCertificateResponsePrivate::DeleteHsmClientCertificateResponsePrivate(
    DeleteHsmClientCertificateResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteHsmClientCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHsmClientCertificateResponsePrivate::DeleteHsmClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHsmClientCertificateResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
