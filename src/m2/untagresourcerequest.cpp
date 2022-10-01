// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for M2 UntagResource requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : M2Request(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : M2Request(new UntagResourceRequestPrivate(M2Request::UntagResourceAction, this))
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
 * \class QtAws::M2::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const M2Request::Action action, UntagResourceRequest * const q)
    : M2RequestPrivate(action, q)
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
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
