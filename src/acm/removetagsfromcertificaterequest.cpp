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

#include "removetagsfromcertificaterequest.h"
#include "removetagsfromcertificaterequest_p.h"
#include "removetagsfromcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::RemoveTagsFromCertificateRequest
 * \brief The RemoveTagsFromCertificateRequest class provides an interface for Acm RemoveTagsFromCertificate requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::removeTagsFromCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveTagsFromCertificateRequest::RemoveTagsFromCertificateRequest(const RemoveTagsFromCertificateRequest &other)
    : AcmRequest(new RemoveTagsFromCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveTagsFromCertificateRequest object.
 */
RemoveTagsFromCertificateRequest::RemoveTagsFromCertificateRequest()
    : AcmRequest(new RemoveTagsFromCertificateRequestPrivate(AcmRequest::RemoveTagsFromCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveTagsFromCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveTagsFromCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsFromCertificateRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::RemoveTagsFromCertificateRequestPrivate
 * \brief The RemoveTagsFromCertificateRequestPrivate class provides private implementation for RemoveTagsFromCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a RemoveTagsFromCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
RemoveTagsFromCertificateRequestPrivate::RemoveTagsFromCertificateRequestPrivate(
    const AcmRequest::Action action, RemoveTagsFromCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromCertificateRequest
 * class' copy constructor.
 */
RemoveTagsFromCertificateRequestPrivate::RemoveTagsFromCertificateRequestPrivate(
    const RemoveTagsFromCertificateRequestPrivate &other, RemoveTagsFromCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
