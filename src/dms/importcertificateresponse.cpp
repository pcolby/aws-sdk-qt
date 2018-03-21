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

#include "importcertificateresponse.h"
#include "importcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ImportCertificateResponse
 *
 * @brief  Handles DatabaseMigrationService ImportCertificate responses.
 *
 * @see    DatabaseMigrationServiceClient::importCertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportCertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new ImportCertificateResponsePrivate(this), parent)
{
    setRequest(new ImportCertificateRequest(request));
    setReply(reply);
}

const ImportCertificateRequest * ImportCertificateResponse::request() const
{
    Q_D(const ImportCertificateResponse);
    return static_cast<const ImportCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService ImportCertificate response.
 *
 * @param  response  Response to parse.
 */
void ImportCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportCertificateResponsePrivate
 *
 * @brief  Private implementation for ImportCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportCertificateResponse instance.
 */
ImportCertificateResponsePrivate::ImportCertificateResponsePrivate(
    ImportCertificateQueueResponse * const q) : ImportCertificatePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService ImportCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportCertificateResponsePrivate::ImportCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportCertificateResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
