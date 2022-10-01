// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesourceserverrequest.h"
#include "deletesourceserverrequest_p.h"
#include "deletesourceserverresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DeleteSourceServerRequest
 * \brief The DeleteSourceServerRequest class provides an interface for Mgn DeleteSourceServer requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::deleteSourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSourceServerRequest::DeleteSourceServerRequest(const DeleteSourceServerRequest &other)
    : MgnRequest(new DeleteSourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSourceServerRequest object.
 */
DeleteSourceServerRequest::DeleteSourceServerRequest()
    : MgnRequest(new DeleteSourceServerRequestPrivate(MgnRequest::DeleteSourceServerAction, this))
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
 * \class QtAws::Mgn::DeleteSourceServerRequestPrivate
 * \brief The DeleteSourceServerRequestPrivate class provides private implementation for DeleteSourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DeleteSourceServerRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DeleteSourceServerRequestPrivate::DeleteSourceServerRequestPrivate(
    const MgnRequest::Action action, DeleteSourceServerRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
