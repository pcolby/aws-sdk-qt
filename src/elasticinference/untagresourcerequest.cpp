// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "elasticinferencerequest_p.h"

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for ElasticInference UntagResource requests.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : ElasticInferenceRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : ElasticInferenceRequest(new UntagResourceRequestPrivate(ElasticInferenceRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticInference::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for ElasticInference \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const ElasticInferenceRequest::Action action, UntagResourceRequest * const q)
    : ElasticInferenceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : ElasticInferenceRequestPrivate(other, q)
{

}

} // namespace ElasticInference
} // namespace QtAws
