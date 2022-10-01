// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefraudsterrequest.h"
#include "deletefraudsterrequest_p.h"
#include "deletefraudsterresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DeleteFraudsterRequest
 * \brief The DeleteFraudsterRequest class provides an interface for VoiceId DeleteFraudster requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::deleteFraudster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFraudsterRequest::DeleteFraudsterRequest(const DeleteFraudsterRequest &other)
    : VoiceIdRequest(new DeleteFraudsterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFraudsterRequest object.
 */
DeleteFraudsterRequest::DeleteFraudsterRequest()
    : VoiceIdRequest(new DeleteFraudsterRequestPrivate(VoiceIdRequest::DeleteFraudsterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFraudsterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFraudsterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFraudsterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFraudsterResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DeleteFraudsterRequestPrivate
 * \brief The DeleteFraudsterRequestPrivate class provides private implementation for DeleteFraudsterRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DeleteFraudsterRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DeleteFraudsterRequestPrivate::DeleteFraudsterRequestPrivate(
    const VoiceIdRequest::Action action, DeleteFraudsterRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFraudsterRequest
 * class' copy constructor.
 */
DeleteFraudsterRequestPrivate::DeleteFraudsterRequestPrivate(
    const DeleteFraudsterRequestPrivate &other, DeleteFraudsterRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
