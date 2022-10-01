// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiorequest.h"
#include "deletestudiorequest_p.h"
#include "deletestudioresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStudioRequest
 * \brief The DeleteStudioRequest class provides an interface for Nimble DeleteStudio requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::deleteStudio
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioRequest::DeleteStudioRequest(const DeleteStudioRequest &other)
    : NimbleRequest(new DeleteStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioRequest object.
 */
DeleteStudioRequest::DeleteStudioRequest()
    : NimbleRequest(new DeleteStudioRequestPrivate(NimbleRequest::DeleteStudioAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::DeleteStudioRequestPrivate
 * \brief The DeleteStudioRequestPrivate class provides private implementation for DeleteStudioRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStudioRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
DeleteStudioRequestPrivate::DeleteStudioRequestPrivate(
    const NimbleRequest::Action action, DeleteStudioRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioRequest
 * class' copy constructor.
 */
DeleteStudioRequestPrivate::DeleteStudioRequestPrivate(
    const DeleteStudioRequestPrivate &other, DeleteStudioRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
