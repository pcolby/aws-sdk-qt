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

#include "getcertificaterequest.h"
#include "getcertificaterequest_p.h"
#include "getcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::GetCertificateRequest
 * \brief The GetCertificateRequest class provides an interface for Acm GetCertificate requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::getCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
GetCertificateRequest::GetCertificateRequest(const GetCertificateRequest &other)
    : AcmRequest(new GetCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCertificateRequest object.
 */
GetCertificateRequest::GetCertificateRequest()
    : AcmRequest(new GetCertificateRequestPrivate(AcmRequest::GetCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool GetCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GetCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::GetCertificateRequestPrivate
 * \brief The GetCertificateRequestPrivate class provides private implementation for GetCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a GetCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
GetCertificateRequestPrivate::GetCertificateRequestPrivate(
    const AcmRequest::Action action, GetCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCertificateRequest
 * class' copy constructor.
 */
GetCertificateRequestPrivate::GetCertificateRequestPrivate(
    const GetCertificateRequestPrivate &other, GetCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
