// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainrequest.h"
#include "deletedomainrequest_p.h"
#include "deletedomainresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DeleteDomainRequest
 * \brief The DeleteDomainRequest class provides an interface for VoiceId DeleteDomain requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::deleteDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainRequest::DeleteDomainRequest(const DeleteDomainRequest &other)
    : VoiceIdRequest(new DeleteDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainRequest object.
 */
DeleteDomainRequest::DeleteDomainRequest()
    : VoiceIdRequest(new DeleteDomainRequestPrivate(VoiceIdRequest::DeleteDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DeleteDomainRequestPrivate
 * \brief The DeleteDomainRequestPrivate class provides private implementation for DeleteDomainRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DeleteDomainRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const VoiceIdRequest::Action action, DeleteDomainRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainRequest
 * class' copy constructor.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const DeleteDomainRequestPrivate &other, DeleteDomainRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
