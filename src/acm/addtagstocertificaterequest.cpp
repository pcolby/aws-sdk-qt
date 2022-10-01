// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagstocertificaterequest.h"
#include "addtagstocertificaterequest_p.h"
#include "addtagstocertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::AddTagsToCertificateRequest
 * \brief The AddTagsToCertificateRequest class provides an interface for Acm AddTagsToCertificate requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::addTagsToCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsToCertificateRequest::AddTagsToCertificateRequest(const AddTagsToCertificateRequest &other)
    : AcmRequest(new AddTagsToCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsToCertificateRequest object.
 */
AddTagsToCertificateRequest::AddTagsToCertificateRequest()
    : AcmRequest(new AddTagsToCertificateRequestPrivate(AcmRequest::AddTagsToCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsToCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsToCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToCertificateRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::AddTagsToCertificateRequestPrivate
 * \brief The AddTagsToCertificateRequestPrivate class provides private implementation for AddTagsToCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a AddTagsToCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
AddTagsToCertificateRequestPrivate::AddTagsToCertificateRequestPrivate(
    const AcmRequest::Action action, AddTagsToCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToCertificateRequest
 * class' copy constructor.
 */
AddTagsToCertificateRequestPrivate::AddTagsToCertificateRequestPrivate(
    const AddTagsToCertificateRequestPrivate &other, AddTagsToCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
