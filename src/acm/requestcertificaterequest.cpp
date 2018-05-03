/*
    Copyright 2013-2018 Paul Colby

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

#include "requestcertificaterequest.h"
#include "requestcertificaterequest_p.h"
#include "requestcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::RequestCertificateRequest
 * \brief The RequestCertificateRequest class provides an interface for ACM RequestCertificate requests.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate Manager User
 *  Guide</i>
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
 * \class QtAws::ACM::RequestCertificateRequestPrivate
 * \brief The RequestCertificateRequestPrivate class provides private implementation for RequestCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsACM
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

} // namespace ACM
} // namespace QtAws
