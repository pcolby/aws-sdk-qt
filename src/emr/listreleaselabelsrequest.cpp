// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreleaselabelsrequest.h"
#include "listreleaselabelsrequest_p.h"
#include "listreleaselabelsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListReleaseLabelsRequest
 * \brief The ListReleaseLabelsRequest class provides an interface for Emr ListReleaseLabels requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listReleaseLabels
 */

/*!
 * Constructs a copy of \a other.
 */
ListReleaseLabelsRequest::ListReleaseLabelsRequest(const ListReleaseLabelsRequest &other)
    : EmrRequest(new ListReleaseLabelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReleaseLabelsRequest object.
 */
ListReleaseLabelsRequest::ListReleaseLabelsRequest()
    : EmrRequest(new ListReleaseLabelsRequestPrivate(EmrRequest::ListReleaseLabelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReleaseLabelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReleaseLabelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReleaseLabelsRequest::response(QNetworkReply * const reply) const
{
    return new ListReleaseLabelsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListReleaseLabelsRequestPrivate
 * \brief The ListReleaseLabelsRequestPrivate class provides private implementation for ListReleaseLabelsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListReleaseLabelsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListReleaseLabelsRequestPrivate::ListReleaseLabelsRequestPrivate(
    const EmrRequest::Action action, ListReleaseLabelsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReleaseLabelsRequest
 * class' copy constructor.
 */
ListReleaseLabelsRequestPrivate::ListReleaseLabelsRequestPrivate(
    const ListReleaseLabelsRequestPrivate &other, ListReleaseLabelsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
