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
