// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstancesrequest.h"
#include "listinstancesrequest_p.h"
#include "listinstancesresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListInstancesRequest
 * \brief The ListInstancesRequest class provides an interface for Emr ListInstances requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstancesRequest::ListInstancesRequest(const ListInstancesRequest &other)
    : EmrRequest(new ListInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstancesRequest object.
 */
ListInstancesRequest::ListInstancesRequest()
    : EmrRequest(new ListInstancesRequestPrivate(EmrRequest::ListInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListInstancesRequestPrivate
 * \brief The ListInstancesRequestPrivate class provides private implementation for ListInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListInstancesRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const EmrRequest::Action action, ListInstancesRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstancesRequest
 * class' copy constructor.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const ListInstancesRequestPrivate &other, ListInstancesRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
