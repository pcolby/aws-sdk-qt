// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagsrequest.h"
#include "addtagsrequest_p.h"
#include "addtagsresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::AddTagsRequest
 * \brief The AddTagsRequest class provides an interface for MachineLearning AddTags requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::addTags
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsRequest::AddTagsRequest(const AddTagsRequest &other)
    : MachineLearningRequest(new AddTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsRequest object.
 */
AddTagsRequest::AddTagsRequest()
    : MachineLearningRequest(new AddTagsRequestPrivate(MachineLearningRequest::AddTagsAction, this))
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
 * \class QtAws::MachineLearning::AddTagsRequestPrivate
 * \brief The AddTagsRequestPrivate class provides private implementation for AddTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a AddTagsRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const MachineLearningRequest::Action action, AddTagsRequest * const q)
    : MachineLearningRequestPrivate(action, q)
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
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
