// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourcerequest.h"
#include "describeresourcerequest_p.h"
#include "describeresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DescribeResourceRequest
 * \brief The DescribeResourceRequest class provides an interface for LakeFormation DescribeResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::describeResource
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeResourceRequest::DescribeResourceRequest(const DescribeResourceRequest &other)
    : LakeFormationRequest(new DescribeResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeResourceRequest object.
 */
DescribeResourceRequest::DescribeResourceRequest()
    : LakeFormationRequest(new DescribeResourceRequestPrivate(LakeFormationRequest::DescribeResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DescribeResourceRequestPrivate
 * \brief The DescribeResourceRequestPrivate class provides private implementation for DescribeResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DescribeResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DescribeResourceRequestPrivate::DescribeResourceRequestPrivate(
    const LakeFormationRequest::Action action, DescribeResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourceRequest
 * class' copy constructor.
 */
DescribeResourceRequestPrivate::DescribeResourceRequestPrivate(
    const DescribeResourceRequestPrivate &other, DescribeResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
