// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbootstrapactionsrequest.h"
#include "listbootstrapactionsrequest_p.h"
#include "listbootstrapactionsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListBootstrapActionsRequest
 * \brief The ListBootstrapActionsRequest class provides an interface for Emr ListBootstrapActions requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listBootstrapActions
 */

/*!
 * Constructs a copy of \a other.
 */
ListBootstrapActionsRequest::ListBootstrapActionsRequest(const ListBootstrapActionsRequest &other)
    : EmrRequest(new ListBootstrapActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBootstrapActionsRequest object.
 */
ListBootstrapActionsRequest::ListBootstrapActionsRequest()
    : EmrRequest(new ListBootstrapActionsRequestPrivate(EmrRequest::ListBootstrapActionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBootstrapActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBootstrapActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBootstrapActionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBootstrapActionsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListBootstrapActionsRequestPrivate
 * \brief The ListBootstrapActionsRequestPrivate class provides private implementation for ListBootstrapActionsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListBootstrapActionsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListBootstrapActionsRequestPrivate::ListBootstrapActionsRequestPrivate(
    const EmrRequest::Action action, ListBootstrapActionsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBootstrapActionsRequest
 * class' copy constructor.
 */
ListBootstrapActionsRequestPrivate::ListBootstrapActionsRequestPrivate(
    const ListBootstrapActionsRequestPrivate &other, ListBootstrapActionsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
