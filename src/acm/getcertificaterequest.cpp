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
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/http:/docs.aws.amazon.comacm/latest/userguide/"> <i>AWS
 *  Certificate Manager User Guide</i>
 *
 * \sa ACMClient::getCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
GetCertificateRequest::GetCertificateRequest(const GetCertificateRequest &other)
    : ACMRequest(new GetCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCertificateRequest object.
 */
GetCertificateRequest::GetCertificateRequest()
    : ACMRequest(new GetCertificateRequestPrivate(ACMRequest::GetCertificateAction, this))
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
 * Constructs a GetCertificateRequestPrivate object for ACM \a action,
 * with public implementation \a q.
 */
GetCertificateRequestPrivate::GetCertificateRequestPrivate(
    const ACMRequest::Action action, GetCertificateRequest * const q)
    : ACMRequestPrivate(action, q)
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
    : ACMRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
