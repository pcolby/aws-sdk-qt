// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworldsrequest.h"
#include "listworldsrequest_p.h"
#include "listworldsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldsRequest
 * \brief The ListWorldsRequest class provides an interface for RoboMaker ListWorlds requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorlds
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorldsRequest::ListWorldsRequest(const ListWorldsRequest &other)
    : RoboMakerRequest(new ListWorldsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorldsRequest object.
 */
ListWorldsRequest::ListWorldsRequest()
    : RoboMakerRequest(new ListWorldsRequestPrivate(RoboMakerRequest::ListWorldsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorldsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorldsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorldsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorldsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListWorldsRequestPrivate
 * \brief The ListWorldsRequestPrivate class provides private implementation for ListWorldsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListWorldsRequestPrivate::ListWorldsRequestPrivate(
    const RoboMakerRequest::Action action, ListWorldsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorldsRequest
 * class' copy constructor.
 */
ListWorldsRequestPrivate::ListWorldsRequestPrivate(
    const ListWorldsRequestPrivate &other, ListWorldsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
