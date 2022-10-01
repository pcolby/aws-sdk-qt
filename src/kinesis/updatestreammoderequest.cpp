/*
    Copyright 2013-2021 Paul Colby

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
