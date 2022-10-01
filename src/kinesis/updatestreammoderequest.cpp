// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestreammoderequest.h"
#include "updatestreammoderequest_p.h"
#include "updatestreammoderesponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::UpdateStreamModeRequest
 * \brief The UpdateStreamModeRequest class provides an interface for Kinesis UpdateStreamMode requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::updateStreamMode
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStreamModeRequest::UpdateStreamModeRequest(const UpdateStreamModeRequest &other)
    : KinesisRequest(new UpdateStreamModeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStreamModeRequest object.
 */
UpdateStreamModeRequest::UpdateStreamModeRequest()
    : KinesisRequest(new UpdateStreamModeRequestPrivate(KinesisRequest::UpdateStreamModeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStreamModeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStreamModeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStreamModeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStreamModeResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::UpdateStreamModeRequestPrivate
 * \brief The UpdateStreamModeRequestPrivate class provides private implementation for UpdateStreamModeRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a UpdateStreamModeRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
UpdateStreamModeRequestPrivate::UpdateStreamModeRequestPrivate(
    const KinesisRequest::Action action, UpdateStreamModeRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStreamModeRequest
 * class' copy constructor.
 */
UpdateStreamModeRequestPrivate::UpdateStreamModeRequestPrivate(
    const UpdateStreamModeRequestPrivate &other, UpdateStreamModeRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
