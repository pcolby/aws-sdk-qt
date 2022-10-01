// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststepsrequest.h"
#include "liststepsrequest_p.h"
#include "liststepsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListStepsRequest
 * \brief The ListStepsRequest class provides an interface for Emr ListSteps requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listSteps
 */

/*!
 * Constructs a copy of \a other.
 */
ListStepsRequest::ListStepsRequest(const ListStepsRequest &other)
    : EmrRequest(new ListStepsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStepsRequest object.
 */
ListStepsRequest::ListStepsRequest()
    : EmrRequest(new ListStepsRequestPrivate(EmrRequest::ListStepsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStepsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStepsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStepsRequest::response(QNetworkReply * const reply) const
{
    return new ListStepsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListStepsRequestPrivate
 * \brief The ListStepsRequestPrivate class provides private implementation for ListStepsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListStepsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListStepsRequestPrivate::ListStepsRequestPrivate(
    const EmrRequest::Action action, ListStepsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStepsRequest
 * class' copy constructor.
 */
ListStepsRequestPrivate::ListStepsRequestPrivate(
    const ListStepsRequestPrivate &other, ListStepsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
