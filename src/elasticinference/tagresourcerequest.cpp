// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "elasticinferencerequest_p.h"

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for ElasticInference TagResource requests.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : ElasticInferenceRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : ElasticInferenceRequest(new TagResourceRequestPrivate(ElasticInferenceRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticInference::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a TagResourceRequestPrivate object for ElasticInference \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const ElasticInferenceRequest::Action action, TagResourceRequest * const q)
    : ElasticInferenceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : ElasticInferenceRequestPrivate(other, q)
{

}

} // namespace ElasticInference
} // namespace QtAws
