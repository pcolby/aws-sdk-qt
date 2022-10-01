/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
