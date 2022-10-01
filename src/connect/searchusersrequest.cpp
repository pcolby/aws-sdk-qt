// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchusersrequest.h"
#include "searchusersrequest_p.h"
#include "searchusersresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::SearchUsersRequest
 * \brief The SearchUsersRequest class provides an interface for Connect SearchUsers requests.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::searchUsers
 */

/*!
 * Constructs a copy of \a other.
 */
SearchUsersRequest::SearchUsersRequest(const SearchUsersRequest &other)
    : ConnectRequest(new SearchUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchUsersRequest object.
 */
SearchUsersRequest::SearchUsersRequest()
    : ConnectRequest(new SearchUsersRequestPrivate(ConnectRequest::SearchUsersAction, this))
{

}

/*!
 * \reimp
 */
bool SearchUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchUsersRequest::response(QNetworkReply * const reply) const
{
    return new SearchUsersResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::SearchUsersRequestPrivate
 * \brief The SearchUsersRequestPrivate class provides private implementation for SearchUsersRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a SearchUsersRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
SearchUsersRequestPrivate::SearchUsersRequestPrivate(
    const ConnectRequest::Action action, SearchUsersRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchUsersRequest
 * class' copy constructor.
 */
SearchUsersRequestPrivate::SearchUsersRequestPrivate(
    const SearchUsersRequestPrivate &other, SearchUsersRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
