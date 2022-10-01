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

#include "describecertificaterequest.h"
#include "describecertificaterequest_p.h"
#include "describecertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::DescribeCertificateRequest
 * \brief The DescribeCertificateRequest class provides an interface for Acm DescribeCertificate requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::describeCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCertificateRequest::DescribeCertificateRequest(const DescribeCertificateRequest &other)
    : AcmRequest(new DescribeCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCertificateRequest object.
 */
DescribeCertificateRequest::DescribeCertificateRequest()
    : AcmRequest(new DescribeCertificateRequestPrivate(AcmRequest::DescribeCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::DescribeCertificateRequestPrivate
 * \brief The DescribeCertificateRequestPrivate class provides private implementation for DescribeCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a DescribeCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
DescribeCertificateRequestPrivate::DescribeCertificateRequestPrivate(
    const AcmRequest::Action action, DescribeCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificateRequest
 * class' copy constructor.
 */
DescribeCertificateRequestPrivate::DescribeCertificateRequestPrivate(
    const DescribeCertificateRequestPrivate &other, DescribeCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
