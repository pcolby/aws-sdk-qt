// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschedulesrequest.h"
#include "listschedulesrequest_p.h"
#include "listschedulesresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListSchedulesRequest
 * \brief The ListSchedulesRequest class provides an interface for DataBrew ListSchedules requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listSchedules
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchedulesRequest::ListSchedulesRequest(const ListSchedulesRequest &other)
    : DataBrewRequest(new ListSchedulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchedulesRequest object.
 */
ListSchedulesRequest::ListSchedulesRequest()
    : DataBrewRequest(new ListSchedulesRequestPrivate(DataBrewRequest::ListSchedulesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSchedulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSchedulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSchedulesRequest::response(QNetworkReply * const reply) const
{
    return new ListSchedulesResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::ListSchedulesRequestPrivate
 * \brief The ListSchedulesRequestPrivate class provides private implementation for ListSchedulesRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListSchedulesRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
ListSchedulesRequestPrivate::ListSchedulesRequestPrivate(
    const DataBrewRequest::Action action, ListSchedulesRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSchedulesRequest
 * class' copy constructor.
 */
ListSchedulesRequestPrivate::ListSchedulesRequestPrivate(
    const ListSchedulesRequestPrivate &other, ListSchedulesRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
