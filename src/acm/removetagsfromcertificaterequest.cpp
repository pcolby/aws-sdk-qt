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

#include "removetagsfromcertificaterequest.h"
#include "removetagsfromcertificaterequest_p.h"
#include "removetagsfromcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::RemoveTagsFromCertificateRequest
 * \brief The RemoveTagsFromCertificateRequest class provides an interface for ACM RemoveTagsFromCertificate requests.
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
 * \class QtAws::ACM::RemoveTagsFromCertificateRequestPrivate
 * \brief The RemoveTagsFromCertificateRequestPrivate class provides private implementation for RemoveTagsFromCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsACM
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

} // namespace ACM
} // namespace QtAws
