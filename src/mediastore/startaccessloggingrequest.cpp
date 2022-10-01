// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startaccessloggingrequest.h"
#include "startaccessloggingrequest_p.h"
#include "startaccessloggingresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::StartAccessLoggingRequest
 * \brief The StartAccessLoggingRequest class provides an interface for MediaStore StartAccessLogging requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::startAccessLogging
 */

/*!
 * Constructs a copy of \a other.
 */
StartAccessLoggingRequest::StartAccessLoggingRequest(const StartAccessLoggingRequest &other)
    : MediaStoreRequest(new StartAccessLoggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartAccessLoggingRequest object.
 */
StartAccessLoggingRequest::StartAccessLoggingRequest()
    : MediaStoreRequest(new StartAccessLoggingRequestPrivate(MediaStoreRequest::StartAccessLoggingAction, this))
{

}

/*!
 * \reimp
 */
bool StartAccessLoggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartAccessLoggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartAccessLoggingRequest::response(QNetworkReply * const reply) const
{
    return new StartAccessLoggingResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::StartAccessLoggingRequestPrivate
 * \brief The StartAccessLoggingRequestPrivate class provides private implementation for StartAccessLoggingRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a StartAccessLoggingRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
StartAccessLoggingRequestPrivate::StartAccessLoggingRequestPrivate(
    const MediaStoreRequest::Action action, StartAccessLoggingRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartAccessLoggingRequest
 * class' copy constructor.
 */
StartAccessLoggingRequestPrivate::StartAccessLoggingRequestPrivate(
    const StartAccessLoggingRequestPrivate &other, StartAccessLoggingRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
