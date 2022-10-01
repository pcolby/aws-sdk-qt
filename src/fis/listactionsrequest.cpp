// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listactionsrequest.h"
#include "listactionsrequest_p.h"
#include "listactionsresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListActionsRequest
 * \brief The ListActionsRequest class provides an interface for Fis ListActions requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listActions
 */

/*!
 * Constructs a copy of \a other.
 */
ListActionsRequest::ListActionsRequest(const ListActionsRequest &other)
    : FisRequest(new ListActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListActionsRequest object.
 */
ListActionsRequest::ListActionsRequest()
    : FisRequest(new ListActionsRequestPrivate(FisRequest::ListActionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListActionsRequest::response(QNetworkReply * const reply) const
{
    return new ListActionsResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::ListActionsRequestPrivate
 * \brief The ListActionsRequestPrivate class provides private implementation for ListActionsRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListActionsRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
ListActionsRequestPrivate::ListActionsRequestPrivate(
    const FisRequest::Action action, ListActionsRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListActionsRequest
 * class' copy constructor.
 */
ListActionsRequestPrivate::ListActionsRequestPrivate(
    const ListActionsRequestPrivate &other, ListActionsRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
