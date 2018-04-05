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

#include "describecertificateauthorityauditreportrequest.h"
#include "describecertificateauthorityauditreportrequest_p.h"
#include "describecertificateauthorityauditreportresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  DescribeCertificateAuthorityAuditReportRequest
 *
 * @brief  Implements ACMPCA DescribeCertificateAuthorityAuditReport requests.
 *
 * @see    ACMPCAClient::describeCertificateAuthorityAuditReport
 */

/**
 * @brief  Constructs a new DescribeCertificateAuthorityAuditReportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCertificateAuthorityAuditReportRequest::DescribeCertificateAuthorityAuditReportRequest(const DescribeCertificateAuthorityAuditReportRequest &other)
    : ACMPCARequest(new DescribeCertificateAuthorityAuditReportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCertificateAuthorityAuditReportRequest object.
 */
DescribeCertificateAuthorityAuditReportRequest::DescribeCertificateAuthorityAuditReportRequest()
    : ACMPCARequest(new DescribeCertificateAuthorityAuditReportRequestPrivate(ACMPCARequest::DescribeCertificateAuthorityAuditReportAction, this))
{

}

bool DescribeCertificateAuthorityAuditReportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCertificateAuthorityAuditReportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCertificateAuthorityAuditReportResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCertificateAuthorityAuditReportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificateAuthorityAuditReportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCertificateAuthorityAuditReportRequestPrivate
 *
 * @brief  Private implementation for DescribeCertificateAuthorityAuditReportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateAuthorityAuditReportRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public DescribeCertificateAuthorityAuditReportRequest instance.
 */
DescribeCertificateAuthorityAuditReportRequestPrivate::DescribeCertificateAuthorityAuditReportRequestPrivate(
    const ACMPCARequest::Action action, DescribeCertificateAuthorityAuditReportRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateAuthorityAuditReportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificateAuthorityAuditReportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCertificateAuthorityAuditReportRequest instance.
 */
DescribeCertificateAuthorityAuditReportRequestPrivate::DescribeCertificateAuthorityAuditReportRequestPrivate(
    const DescribeCertificateAuthorityAuditReportRequestPrivate &other, DescribeCertificateAuthorityAuditReportRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
