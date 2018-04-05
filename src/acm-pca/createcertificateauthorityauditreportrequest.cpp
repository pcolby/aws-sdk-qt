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

#include "createcertificateauthorityauditreportrequest.h"
#include "createcertificateauthorityauditreportrequest_p.h"
#include "createcertificateauthorityauditreportresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  CreateCertificateAuthorityAuditReportRequest
 *
 * @brief  Implements ACMPCA CreateCertificateAuthorityAuditReport requests.
 *
 * @see    ACMPCAClient::createCertificateAuthorityAuditReport
 */

/**
 * @brief  Constructs a new CreateCertificateAuthorityAuditReportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCertificateAuthorityAuditReportRequest::CreateCertificateAuthorityAuditReportRequest(const CreateCertificateAuthorityAuditReportRequest &other)
    : ACMPCARequest(new CreateCertificateAuthorityAuditReportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCertificateAuthorityAuditReportRequest object.
 */
CreateCertificateAuthorityAuditReportRequest::CreateCertificateAuthorityAuditReportRequest()
    : ACMPCARequest(new CreateCertificateAuthorityAuditReportRequestPrivate(ACMPCARequest::CreateCertificateAuthorityAuditReportAction, this))
{

}

bool CreateCertificateAuthorityAuditReportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCertificateAuthorityAuditReportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCertificateAuthorityAuditReportResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCertificateAuthorityAuditReportRequest::response(QNetworkReply * const reply) const
{
    return new CreateCertificateAuthorityAuditReportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCertificateAuthorityAuditReportRequestPrivate
 *
 * @brief  Private implementation for CreateCertificateAuthorityAuditReportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateAuthorityAuditReportRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public CreateCertificateAuthorityAuditReportRequest instance.
 */
CreateCertificateAuthorityAuditReportRequestPrivate::CreateCertificateAuthorityAuditReportRequestPrivate(
    const ACMPCARequest::Action action, CreateCertificateAuthorityAuditReportRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateAuthorityAuditReportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCertificateAuthorityAuditReportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCertificateAuthorityAuditReportRequest instance.
 */
CreateCertificateAuthorityAuditReportRequestPrivate::CreateCertificateAuthorityAuditReportRequestPrivate(
    const CreateCertificateAuthorityAuditReportRequestPrivate &other, CreateCertificateAuthorityAuditReportRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
