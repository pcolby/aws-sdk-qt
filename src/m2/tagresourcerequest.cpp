// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for M2 TagResource requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : M2Request(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : M2Request(new TagResourceRequestPrivate(M2Request::TagResourceAction, this))
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
 * \class QtAws::M2::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a TagResourceRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const M2Request::Action action, TagResourceRequest * const q)
    : M2RequestPrivate(action, q)
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
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
