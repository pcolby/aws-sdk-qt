// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefraudsterregistrationjobrequest.h"
#include "describefraudsterregistrationjobrequest_p.h"
#include "describefraudsterregistrationjobresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeFraudsterRegistrationJobRequest
 * \brief The DescribeFraudsterRegistrationJobRequest class provides an interface for VoiceId DescribeFraudsterRegistrationJob requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeFraudsterRegistrationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFraudsterRegistrationJobRequest::DescribeFraudsterRegistrationJobRequest(const DescribeFraudsterRegistrationJobRequest &other)
    : VoiceIdRequest(new DescribeFraudsterRegistrationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFraudsterRegistrationJobRequest object.
 */
DescribeFraudsterRegistrationJobRequest::DescribeFraudsterRegistrationJobRequest()
    : VoiceIdRequest(new DescribeFraudsterRegistrationJobRequestPrivate(VoiceIdRequest::DescribeFraudsterRegistrationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFraudsterRegistrationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFraudsterRegistrationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFraudsterRegistrationJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFraudsterRegistrationJobResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DescribeFraudsterRegistrationJobRequestPrivate
 * \brief The DescribeFraudsterRegistrationJobRequestPrivate class provides private implementation for DescribeFraudsterRegistrationJobRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeFraudsterRegistrationJobRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DescribeFraudsterRegistrationJobRequestPrivate::DescribeFraudsterRegistrationJobRequestPrivate(
    const VoiceIdRequest::Action action, DescribeFraudsterRegistrationJobRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFraudsterRegistrationJobRequest
 * class' copy constructor.
 */
DescribeFraudsterRegistrationJobRequestPrivate::DescribeFraudsterRegistrationJobRequestPrivate(
    const DescribeFraudsterRegistrationJobRequestPrivate &other, DescribeFraudsterRegistrationJobRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
