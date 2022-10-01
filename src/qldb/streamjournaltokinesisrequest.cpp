// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "streamjournaltokinesisrequest.h"
#include "streamjournaltokinesisrequest_p.h"
#include "streamjournaltokinesisresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::StreamJournalToKinesisRequest
 * \brief The StreamJournalToKinesisRequest class provides an interface for Qldb StreamJournalToKinesis requests.
 *
 * \inmodule QtAwsQldb
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
 * \class QtAws::Qldb::StreamJournalToKinesisRequestPrivate
 * \brief The StreamJournalToKinesisRequestPrivate class provides private implementation for StreamJournalToKinesisRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
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

} // namespace Qldb
} // namespace QtAws
