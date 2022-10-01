// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectrequest.h"
#include "putobjectrequest_p.h"
#include "putobjectresponse.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::PutObjectRequest
 * \brief The PutObjectRequest class provides an interface for MediaStoreData PutObject requests.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::putObject
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectRequest::PutObjectRequest(const PutObjectRequest &other)
    : MediaStoreDataRequest(new PutObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectRequest object.
 */
PutObjectRequest::PutObjectRequest()
    : MediaStoreDataRequest(new PutObjectRequestPrivate(MediaStoreDataRequest::PutObjectAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStoreData::PutObjectRequestPrivate
 * \brief The PutObjectRequestPrivate class provides private implementation for PutObjectRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a PutObjectRequestPrivate object for MediaStoreData \a action,
 * with public implementation \a q.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const MediaStoreDataRequest::Action action, PutObjectRequest * const q)
    : MediaStoreDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectRequest
 * class' copy constructor.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const PutObjectRequestPrivate &other, PutObjectRequest * const q)
    : MediaStoreDataRequestPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
