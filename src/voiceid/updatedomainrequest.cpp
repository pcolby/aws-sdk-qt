// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainrequest.h"
#include "updatedomainrequest_p.h"
#include "updatedomainresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::UpdateDomainRequest
 * \brief The UpdateDomainRequest class provides an interface for VoiceId UpdateDomain requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::updateDomain
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainRequest::UpdateDomainRequest(const UpdateDomainRequest &other)
    : VoiceIdRequest(new UpdateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainRequest object.
 */
UpdateDomainRequest::UpdateDomainRequest()
    : VoiceIdRequest(new UpdateDomainRequestPrivate(VoiceIdRequest::UpdateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::UpdateDomainRequestPrivate
 * \brief The UpdateDomainRequestPrivate class provides private implementation for UpdateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a UpdateDomainRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
UpdateDomainRequestPrivate::UpdateDomainRequestPrivate(
    const VoiceIdRequest::Action action, UpdateDomainRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainRequest
 * class' copy constructor.
 */
UpdateDomainRequestPrivate::UpdateDomainRequestPrivate(
    const UpdateDomainRequestPrivate &other, UpdateDomainRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
