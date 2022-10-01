// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "renewcertificaterequest.h"
#include "renewcertificaterequest_p.h"
#include "renewcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::RenewCertificateRequest
 * \brief The RenewCertificateRequest class provides an interface for Acm RenewCertificate requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::renewCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
RenewCertificateRequest::RenewCertificateRequest(const RenewCertificateRequest &other)
    : AcmRequest(new RenewCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RenewCertificateRequest object.
 */
RenewCertificateRequest::RenewCertificateRequest()
    : AcmRequest(new RenewCertificateRequestPrivate(AcmRequest::RenewCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool RenewCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RenewCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RenewCertificateRequest::response(QNetworkReply * const reply) const
{
    return new RenewCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::RenewCertificateRequestPrivate
 * \brief The RenewCertificateRequestPrivate class provides private implementation for RenewCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a RenewCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
RenewCertificateRequestPrivate::RenewCertificateRequestPrivate(
    const AcmRequest::Action action, RenewCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RenewCertificateRequest
 * class' copy constructor.
 */
RenewCertificateRequestPrivate::RenewCertificateRequestPrivate(
    const RenewCertificateRequestPrivate &other, RenewCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
