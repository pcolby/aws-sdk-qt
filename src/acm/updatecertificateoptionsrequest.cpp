// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecertificateoptionsrequest.h"
#include "updatecertificateoptionsrequest_p.h"
#include "updatecertificateoptionsresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::UpdateCertificateOptionsRequest
 * \brief The UpdateCertificateOptionsRequest class provides an interface for Acm UpdateCertificateOptions requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
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
 * \class QtAws::Acm::UpdateCertificateOptionsRequestPrivate
 * \brief The UpdateCertificateOptionsRequestPrivate class provides private implementation for UpdateCertificateOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
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

} // namespace Acm
} // namespace QtAws
