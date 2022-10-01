// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontainerrequest.h"
#include "describecontainerrequest_p.h"
#include "describecontainerresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DescribeContainerRequest
 * \brief The DescribeContainerRequest class provides an interface for MediaStore DescribeContainer requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::describeContainer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeContainerRequest::DescribeContainerRequest(const DescribeContainerRequest &other)
    : MediaStoreRequest(new DescribeContainerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeContainerRequest object.
 */
DescribeContainerRequest::DescribeContainerRequest()
    : MediaStoreRequest(new DescribeContainerRequestPrivate(MediaStoreRequest::DescribeContainerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeContainerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeContainerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContainerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContainerResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::DescribeContainerRequestPrivate
 * \brief The DescribeContainerRequestPrivate class provides private implementation for DescribeContainerRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DescribeContainerRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
DescribeContainerRequestPrivate::DescribeContainerRequestPrivate(
    const MediaStoreRequest::Action action, DescribeContainerRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeContainerRequest
 * class' copy constructor.
 */
DescribeContainerRequestPrivate::DescribeContainerRequestPrivate(
    const DescribeContainerRequestPrivate &other, DescribeContainerRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
