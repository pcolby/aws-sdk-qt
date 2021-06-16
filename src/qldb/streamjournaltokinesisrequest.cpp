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

#include "streamjournaltokinesisrequest.h"
#include "streamjournaltokinesisrequest_p.h"
#include "streamjournaltokinesisresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::StreamJournalToKinesisRequest
 * \brief The StreamJournalToKinesisRequest class provides an interface for QLDB StreamJournalToKinesis requests.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::streamJournalToKinesis
 */

/*!
 * Constructs a copy of \a other.
 */
StreamJournalToKinesisRequest::StreamJournalToKinesisRequest(const StreamJournalToKinesisRequest &other)
    : QldbRequest(new StreamJournalToKinesisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StreamJournalToKinesisRequest object.
 */
StreamJournalToKinesisRequest::StreamJournalToKinesisRequest()
    : QldbRequest(new StreamJournalToKinesisRequestPrivate(QldbRequest::StreamJournalToKinesisAction, this))
{

}

/*!
 * \reimp
 */
bool StreamJournalToKinesisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StreamJournalToKinesisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StreamJournalToKinesisRequest::response(QNetworkReply * const reply) const
{
    return new StreamJournalToKinesisResponse(*this, reply);
}

/*!
 * \class QtAws::QLDB::StreamJournalToKinesisRequestPrivate
 * \brief The StreamJournalToKinesisRequestPrivate class provides private implementation for StreamJournalToKinesisRequest.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a StreamJournalToKinesisRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
StreamJournalToKinesisRequestPrivate::StreamJournalToKinesisRequestPrivate(
    const QldbRequest::Action action, StreamJournalToKinesisRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StreamJournalToKinesisRequest
 * class' copy constructor.
 */
StreamJournalToKinesisRequestPrivate::StreamJournalToKinesisRequestPrivate(
    const StreamJournalToKinesisRequestPrivate &other, StreamJournalToKinesisRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace QLDB
} // namespace QtAws
