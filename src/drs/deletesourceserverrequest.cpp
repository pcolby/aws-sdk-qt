// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesourceserverrequest.h"
#include "deletesourceserverrequest_p.h"
#include "deletesourceserverresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DeleteSourceServerRequest
 * \brief The DeleteSourceServerRequest class provides an interface for Drs DeleteSourceServer requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::deleteSourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSourceServerRequest::DeleteSourceServerRequest(const DeleteSourceServerRequest &other)
    : DrsRequest(new DeleteSourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSourceServerRequest object.
 */
DeleteSourceServerRequest::DeleteSourceServerRequest()
    : DrsRequest(new DeleteSourceServerRequestPrivate(DrsRequest::DeleteSourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSourceServerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DeleteSourceServerRequestPrivate
 * \brief The DeleteSourceServerRequestPrivate class provides private implementation for DeleteSourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DeleteSourceServerRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DeleteSourceServerRequestPrivate::DeleteSourceServerRequestPrivate(
    const DrsRequest::Action action, DeleteSourceServerRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSourceServerRequest
 * class' copy constructor.
 */
DeleteSourceServerRequestPrivate::DeleteSourceServerRequestPrivate(
    const DeleteSourceServerRequestPrivate &other, DeleteSourceServerRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
