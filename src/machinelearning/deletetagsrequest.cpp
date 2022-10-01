// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetagsrequest.h"
#include "deletetagsrequest_p.h"
#include "deletetagsresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteTagsRequest
 * \brief The DeleteTagsRequest class provides an interface for MachineLearning DeleteTags requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteTags
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTagsRequest::DeleteTagsRequest(const DeleteTagsRequest &other)
    : MachineLearningRequest(new DeleteTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTagsRequest object.
 */
DeleteTagsRequest::DeleteTagsRequest()
    : MachineLearningRequest(new DeleteTagsRequestPrivate(MachineLearningRequest::DeleteTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTagsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTagsResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DeleteTagsRequestPrivate
 * \brief The DeleteTagsRequestPrivate class provides private implementation for DeleteTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteTagsRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const MachineLearningRequest::Action action, DeleteTagsRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTagsRequest
 * class' copy constructor.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const DeleteTagsRequestPrivate &other, DeleteTagsRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
