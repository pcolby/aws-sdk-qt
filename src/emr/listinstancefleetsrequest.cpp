// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstancefleetsrequest.h"
#include "listinstancefleetsrequest_p.h"
#include "listinstancefleetsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListInstanceFleetsRequest
 * \brief The ListInstanceFleetsRequest class provides an interface for Emr ListInstanceFleets requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listInstanceFleets
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceFleetsRequest::ListInstanceFleetsRequest(const ListInstanceFleetsRequest &other)
    : EmrRequest(new ListInstanceFleetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceFleetsRequest object.
 */
ListInstanceFleetsRequest::ListInstanceFleetsRequest()
    : EmrRequest(new ListInstanceFleetsRequestPrivate(EmrRequest::ListInstanceFleetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceFleetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceFleetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceFleetsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListInstanceFleetsRequestPrivate
 * \brief The ListInstanceFleetsRequestPrivate class provides private implementation for ListInstanceFleetsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListInstanceFleetsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListInstanceFleetsRequestPrivate::ListInstanceFleetsRequestPrivate(
    const EmrRequest::Action action, ListInstanceFleetsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceFleetsRequest
 * class' copy constructor.
 */
ListInstanceFleetsRequestPrivate::ListInstanceFleetsRequestPrivate(
    const ListInstanceFleetsRequestPrivate &other, ListInstanceFleetsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
