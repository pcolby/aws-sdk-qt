// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "requestcertificaterequest.h"
#include "requestcertificaterequest_p.h"
#include "requestcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::RequestCertificateRequest
 * \brief The RequestCertificateRequest class provides an interface for Acm RequestCertificate requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::requestCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
RequestCertificateRequest::RequestCertificateRequest(const RequestCertificateRequest &other)
    : AcmRequest(new RequestCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RequestCertificateRequest object.
 */
RequestCertificateRequest::RequestCertificateRequest()
    : AcmRequest(new RequestCertificateRequestPrivate(AcmRequest::RequestCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool RequestCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RequestCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RequestCertificateRequest::response(QNetworkReply * const reply) const
{
    return new RequestCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::RequestCertificateRequestPrivate
 * \brief The RequestCertificateRequestPrivate class provides private implementation for RequestCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a RequestCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
RequestCertificateRequestPrivate::RequestCertificateRequestPrivate(
    const AcmRequest::Action action, RequestCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RequestCertificateRequest
 * class' copy constructor.
 */
RequestCertificateRequestPrivate::RequestCertificateRequestPrivate(
    const RequestCertificateRequestPrivate &other, RequestCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
