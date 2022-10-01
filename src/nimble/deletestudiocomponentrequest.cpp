// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiocomponentrequest.h"
#include "deletestudiocomponentrequest_p.h"
#include "deletestudiocomponentresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStudioComponentRequest
 * \brief The DeleteStudioComponentRequest class provides an interface for Nimble DeleteStudioComponent requests.
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
 * \sa NimbleClient::deleteStudioComponent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioComponentRequest::DeleteStudioComponentRequest(const DeleteStudioComponentRequest &other)
    : NimbleRequest(new DeleteStudioComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioComponentRequest object.
 */
DeleteStudioComponentRequest::DeleteStudioComponentRequest()
    : NimbleRequest(new DeleteStudioComponentRequestPrivate(NimbleRequest::DeleteStudioComponentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioComponentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioComponentResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::DeleteStudioComponentRequestPrivate
 * \brief The DeleteStudioComponentRequestPrivate class provides private implementation for DeleteStudioComponentRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStudioComponentRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
DeleteStudioComponentRequestPrivate::DeleteStudioComponentRequestPrivate(
    const NimbleRequest::Action action, DeleteStudioComponentRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioComponentRequest
 * class' copy constructor.
 */
DeleteStudioComponentRequestPrivate::DeleteStudioComponentRequestPrivate(
    const DeleteStudioComponentRequestPrivate &other, DeleteStudioComponentRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
