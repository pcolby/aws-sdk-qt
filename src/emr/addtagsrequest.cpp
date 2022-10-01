// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagsrequest.h"
#include "addtagsrequest_p.h"
#include "addtagsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::AddTagsRequest
 * \brief The AddTagsRequest class provides an interface for Emr AddTags requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::addTags
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsRequest::AddTagsRequest(const AddTagsRequest &other)
    : EmrRequest(new AddTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsRequest object.
 */
AddTagsRequest::AddTagsRequest()
    : EmrRequest(new AddTagsRequestPrivate(EmrRequest::AddTagsAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::AddTagsRequestPrivate
 * \brief The AddTagsRequestPrivate class provides private implementation for AddTagsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a AddTagsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const EmrRequest::Action action, AddTagsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsRequest
 * class' copy constructor.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const AddTagsRequestPrivate &other, AddTagsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
