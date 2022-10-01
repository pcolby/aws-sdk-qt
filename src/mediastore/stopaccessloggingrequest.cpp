// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopaccessloggingrequest.h"
#include "stopaccessloggingrequest_p.h"
#include "stopaccessloggingresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::StopAccessLoggingRequest
 * \brief The StopAccessLoggingRequest class provides an interface for MediaStore StopAccessLogging requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::stopAccessLogging
 */

/*!
 * Constructs a copy of \a other.
 */
StopAccessLoggingRequest::StopAccessLoggingRequest(const StopAccessLoggingRequest &other)
    : MediaStoreRequest(new StopAccessLoggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopAccessLoggingRequest object.
 */
StopAccessLoggingRequest::StopAccessLoggingRequest()
    : MediaStoreRequest(new StopAccessLoggingRequestPrivate(MediaStoreRequest::StopAccessLoggingAction, this))
{

}

/*!
 * \reimp
 */
bool StopAccessLoggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopAccessLoggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopAccessLoggingRequest::response(QNetworkReply * const reply) const
{
    return new StopAccessLoggingResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::StopAccessLoggingRequestPrivate
 * \brief The StopAccessLoggingRequestPrivate class provides private implementation for StopAccessLoggingRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a StopAccessLoggingRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
StopAccessLoggingRequestPrivate::StopAccessLoggingRequestPrivate(
    const MediaStoreRequest::Action action, StopAccessLoggingRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopAccessLoggingRequest
 * class' copy constructor.
 */
StopAccessLoggingRequestPrivate::StopAccessLoggingRequestPrivate(
    const StopAccessLoggingRequestPrivate &other, StopAccessLoggingRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
