// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefraudsterrequest.h"
#include "describefraudsterrequest_p.h"
#include "describefraudsterresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeFraudsterRequest
 * \brief The DescribeFraudsterRequest class provides an interface for VoiceId DescribeFraudster requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeFraudster
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFraudsterRequest::DescribeFraudsterRequest(const DescribeFraudsterRequest &other)
    : VoiceIdRequest(new DescribeFraudsterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFraudsterRequest object.
 */
DescribeFraudsterRequest::DescribeFraudsterRequest()
    : VoiceIdRequest(new DescribeFraudsterRequestPrivate(VoiceIdRequest::DescribeFraudsterAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFraudsterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFraudsterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFraudsterRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFraudsterResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DescribeFraudsterRequestPrivate
 * \brief The DescribeFraudsterRequestPrivate class provides private implementation for DescribeFraudsterRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeFraudsterRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DescribeFraudsterRequestPrivate::DescribeFraudsterRequestPrivate(
    const VoiceIdRequest::Action action, DescribeFraudsterRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFraudsterRequest
 * class' copy constructor.
 */
DescribeFraudsterRequestPrivate::DescribeFraudsterRequestPrivate(
    const DescribeFraudsterRequestPrivate &other, DescribeFraudsterRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
