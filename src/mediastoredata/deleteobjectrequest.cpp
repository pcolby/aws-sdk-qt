// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectrequest.h"
#include "deleteobjectrequest_p.h"
#include "deleteobjectresponse.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::DeleteObjectRequest
 * \brief The DeleteObjectRequest class provides an interface for MediaStoreData DeleteObject requests.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::deleteObject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectRequest::DeleteObjectRequest(const DeleteObjectRequest &other)
    : MediaStoreDataRequest(new DeleteObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectRequest object.
 */
DeleteObjectRequest::DeleteObjectRequest()
    : MediaStoreDataRequest(new DeleteObjectRequestPrivate(MediaStoreDataRequest::DeleteObjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStoreData::DeleteObjectRequestPrivate
 * \brief The DeleteObjectRequestPrivate class provides private implementation for DeleteObjectRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a DeleteObjectRequestPrivate object for MediaStoreData \a action,
 * with public implementation \a q.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const MediaStoreDataRequest::Action action, DeleteObjectRequest * const q)
    : MediaStoreDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectRequest
 * class' copy constructor.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const DeleteObjectRequestPrivate &other, DeleteObjectRequest * const q)
    : MediaStoreDataRequestPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
