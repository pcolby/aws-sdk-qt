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

#include "createcertificateauthorityauditreportresponse.h"
#include "createcertificateauthorityauditreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  CreateCertificateAuthorityAuditReportResponse
 *
 * @brief  Handles ACMPCA CreateCertificateAuthorityAuditReport responses.
 *
 * @see    ACMPCAClient::createCertificateAuthorityAuditReport
 */

/**
 * @brief  Constructs a new CreateCertificateAuthorityAuditReportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCertificateAuthorityAuditReportResponse::CreateCertificateAuthorityAuditReportResponse(
        const CreateCertificateAuthorityAuditReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new CreateCertificateAuthorityAuditReportResponsePrivate(this), parent)
{
    setRequest(new CreateCertificateAuthorityAuditReportRequest(request));
    setReply(reply);
}

const CreateCertificateAuthorityAuditReportRequest * CreateCertificateAuthorityAuditReportResponse::request() const
{
    Q_D(const CreateCertificateAuthorityAuditReportResponse);
    return static_cast<const CreateCertificateAuthorityAuditReportRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA CreateCertificateAuthorityAuditReport response.
 *
 * @param  response  Response to parse.
 */
void CreateCertificateAuthorityAuditReportResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCertificateAuthorityAuditReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCertificateAuthorityAuditReportResponsePrivate
 *
 * @brief  Private implementation for CreateCertificateAuthorityAuditReportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateAuthorityAuditReportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCertificateAuthorityAuditReportResponse instance.
 */
CreateCertificateAuthorityAuditReportResponsePrivate::CreateCertificateAuthorityAuditReportResponsePrivate(
    CreateCertificateAuthorityAuditReportResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA CreateCertificateAuthorityAuditReportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCertificateAuthorityAuditReportResponsePrivate::parseCreateCertificateAuthorityAuditReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCertificateAuthorityAuditReportResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
