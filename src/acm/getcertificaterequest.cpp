/*
    Copyright 2013-2019 Paul Colby

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
namespace ACM {

/*!
 * \class QtAws::ACM::GetCertificateRequest
 * \brief The GetCertificateRequest class provides an interface for ACM GetCertificate requests.
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
 * \class QtAws::ACM::GetCertificateRequestPrivate
 * \brief The GetCertificateRequestPrivate class provides private implementation for GetCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsACM
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

} // namespace ACM
} // namespace QtAws
