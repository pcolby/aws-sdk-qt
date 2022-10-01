// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfleetsrequest.h"
#include "listfleetsrequest_p.h"
#include "listfleetsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListFleetsRequest
 * \brief The ListFleetsRequest class provides an interface for RoboMaker ListFleets requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listFleets
 */

/*!
 * Constructs a copy of \a other.
 */
ListFleetsRequest::ListFleetsRequest(const ListFleetsRequest &other)
    : RoboMakerRequest(new ListFleetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFleetsRequest object.
 */
ListFleetsRequest::ListFleetsRequest()
    : RoboMakerRequest(new ListFleetsRequestPrivate(RoboMakerRequest::ListFleetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFleetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFleetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListFleetsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListFleetsRequestPrivate
 * \brief The ListFleetsRequestPrivate class provides private implementation for ListFleetsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListFleetsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListFleetsRequestPrivate::ListFleetsRequestPrivate(
    const RoboMakerRequest::Action action, ListFleetsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFleetsRequest
 * class' copy constructor.
 */
ListFleetsRequestPrivate::ListFleetsRequestPrivate(
    const ListFleetsRequestPrivate &other, ListFleetsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
