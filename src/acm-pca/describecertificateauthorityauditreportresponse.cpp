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

#include "describecertificateauthorityauditreportresponse.h"
#include "describecertificateauthorityauditreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  DescribeCertificateAuthorityAuditReportResponse
 *
 * @brief  Handles ACMPCA DescribeCertificateAuthorityAuditReport responses.
 *
 * @see    ACMPCAClient::describeCertificateAuthorityAuditReport
 */

/**
 * @brief  Constructs a new DescribeCertificateAuthorityAuditReportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCertificateAuthorityAuditReportResponse::DescribeCertificateAuthorityAuditReportResponse(
        const DescribeCertificateAuthorityAuditReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new DescribeCertificateAuthorityAuditReportResponsePrivate(this), parent)
{
    setRequest(new DescribeCertificateAuthorityAuditReportRequest(request));
    setReply(reply);
}

const DescribeCertificateAuthorityAuditReportRequest * DescribeCertificateAuthorityAuditReportResponse::request() const
{
    Q_D(const DescribeCertificateAuthorityAuditReportResponse);
    return static_cast<const DescribeCertificateAuthorityAuditReportRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA DescribeCertificateAuthorityAuditReport response.
 *
 * @param  response  Response to parse.
 */
void DescribeCertificateAuthorityAuditReportResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCertificateAuthorityAuditReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCertificateAuthorityAuditReportResponsePrivate
 *
 * @brief  Private implementation for DescribeCertificateAuthorityAuditReportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateAuthorityAuditReportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCertificateAuthorityAuditReportResponse instance.
 */
DescribeCertificateAuthorityAuditReportResponsePrivate::DescribeCertificateAuthorityAuditReportResponsePrivate(
    DescribeCertificateAuthorityAuditReportResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA DescribeCertificateAuthorityAuditReportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCertificateAuthorityAuditReportResponsePrivate::parseDescribeCertificateAuthorityAuditReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificateAuthorityAuditReportResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
