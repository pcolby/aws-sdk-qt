// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resendvalidationemailrequest.h"
#include "resendvalidationemailrequest_p.h"
#include "resendvalidationemailresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ResendValidationEmailRequest
 * \brief The ResendValidationEmailRequest class provides an interface for Acm ResendValidationEmail requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::resendValidationEmail
 */

/*!
 * Constructs a copy of \a other.
 */
ResendValidationEmailRequest::ResendValidationEmailRequest(const ResendValidationEmailRequest &other)
    : AcmRequest(new ResendValidationEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResendValidationEmailRequest object.
 */
ResendValidationEmailRequest::ResendValidationEmailRequest()
    : AcmRequest(new ResendValidationEmailRequestPrivate(AcmRequest::ResendValidationEmailAction, this))
{

}

/*!
 * \reimp
 */
bool ResendValidationEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResendValidationEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResendValidationEmailRequest::response(QNetworkReply * const reply) const
{
    return new ResendValidationEmailResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::ResendValidationEmailRequestPrivate
 * \brief The ResendValidationEmailRequestPrivate class provides private implementation for ResendValidationEmailRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a ResendValidationEmailRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
ResendValidationEmailRequestPrivate::ResendValidationEmailRequestPrivate(
    const AcmRequest::Action action, ResendValidationEmailRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResendValidationEmailRequest
 * class' copy constructor.
 */
ResendValidationEmailRequestPrivate::ResendValidationEmailRequestPrivate(
    const ResendValidationEmailRequestPrivate &other, ResendValidationEmailRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
