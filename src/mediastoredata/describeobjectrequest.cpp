// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeobjectrequest.h"
#include "describeobjectrequest_p.h"
#include "describeobjectresponse.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::DescribeObjectRequest
 * \brief The DescribeObjectRequest class provides an interface for MediaStoreData DescribeObject requests.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::describeObject
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeObjectRequest::DescribeObjectRequest(const DescribeObjectRequest &other)
    : MediaStoreDataRequest(new DescribeObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeObjectRequest object.
 */
DescribeObjectRequest::DescribeObjectRequest()
    : MediaStoreDataRequest(new DescribeObjectRequestPrivate(MediaStoreDataRequest::DescribeObjectAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeObjectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeObjectResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStoreData::DescribeObjectRequestPrivate
 * \brief The DescribeObjectRequestPrivate class provides private implementation for DescribeObjectRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a DescribeObjectRequestPrivate object for MediaStoreData \a action,
 * with public implementation \a q.
 */
DescribeObjectRequestPrivate::DescribeObjectRequestPrivate(
    const MediaStoreDataRequest::Action action, DescribeObjectRequest * const q)
    : MediaStoreDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeObjectRequest
 * class' copy constructor.
 */
DescribeObjectRequestPrivate::DescribeObjectRequestPrivate(
    const DescribeObjectRequestPrivate &other, DescribeObjectRequest * const q)
    : MediaStoreDataRequestPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
