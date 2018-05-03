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

#include "updatecertificateoptionsrequest.h"
#include "updatecertificateoptionsrequest_p.h"
#include "updatecertificateoptionsresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::UpdateCertificateOptionsRequest
 * \brief The UpdateCertificateOptionsRequest class provides an interface for ACM UpdateCertificateOptions requests.
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
 * \sa AcmClient::updateCertificateOptions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCertificateOptionsRequest::UpdateCertificateOptionsRequest(const UpdateCertificateOptionsRequest &other)
    : AcmRequest(new UpdateCertificateOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCertificateOptionsRequest object.
 */
UpdateCertificateOptionsRequest::UpdateCertificateOptionsRequest()
    : AcmRequest(new UpdateCertificateOptionsRequestPrivate(AcmRequest::UpdateCertificateOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCertificateOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCertificateOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCertificateOptionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCertificateOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::ACM::UpdateCertificateOptionsRequestPrivate
 * \brief The UpdateCertificateOptionsRequestPrivate class provides private implementation for UpdateCertificateOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a UpdateCertificateOptionsRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
UpdateCertificateOptionsRequestPrivate::UpdateCertificateOptionsRequestPrivate(
    const AcmRequest::Action action, UpdateCertificateOptionsRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCertificateOptionsRequest
 * class' copy constructor.
 */
UpdateCertificateOptionsRequestPrivate::UpdateCertificateOptionsRequestPrivate(
    const UpdateCertificateOptionsRequestPrivate &other, UpdateCertificateOptionsRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
