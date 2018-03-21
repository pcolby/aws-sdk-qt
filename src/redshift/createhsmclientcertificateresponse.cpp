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

#include "createhsmclientcertificateresponse.h"
#include "createhsmclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  CreateHsmClientCertificateResponse
 *
 * @brief  Handles Redshift CreateHsmClientCertificate responses.
 *
 * @see    RedshiftClient::createHsmClientCertificate
 */

/**
 * @brief  Constructs a new CreateHsmClientCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHsmClientCertificateResponse::CreateHsmClientCertificateResponse(
        const CreateHsmClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new CreateHsmClientCertificateResponsePrivate(this), parent)
{
    setRequest(new CreateHsmClientCertificateRequest(request));
    setReply(reply);
}

const CreateHsmClientCertificateRequest * CreateHsmClientCertificateResponse::request() const
{
    Q_D(const CreateHsmClientCertificateResponse);
    return static_cast<const CreateHsmClientCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift CreateHsmClientCertificate response.
 *
 * @param  response  Response to parse.
 */
void CreateHsmClientCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateHsmClientCertificateResponsePrivate
 *
 * @brief  Private implementation for CreateHsmClientCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmClientCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateHsmClientCertificateResponse instance.
 */
CreateHsmClientCertificateResponsePrivate::CreateHsmClientCertificateResponsePrivate(
    CreateHsmClientCertificateQueueResponse * const q) : CreateHsmClientCertificatePrivate(q)
{

}

/**
 * @brief  Parse an Redshift CreateHsmClientCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateHsmClientCertificateResponsePrivate::CreateHsmClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHsmClientCertificateResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
