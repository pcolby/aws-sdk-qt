// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectrequest.h"
#include "getobjectrequest_p.h"
#include "getobjectresponse.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::GetObjectRequest
 * \brief The GetObjectRequest class provides an interface for MediaStoreData GetObject requests.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::getObject
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectRequest::GetObjectRequest(const GetObjectRequest &other)
    : MediaStoreDataRequest(new GetObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectRequest object.
 */
GetObjectRequest::GetObjectRequest()
    : MediaStoreDataRequest(new GetObjectRequestPrivate(MediaStoreDataRequest::GetObjectAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStoreData::GetObjectRequestPrivate
 * \brief The GetObjectRequestPrivate class provides private implementation for GetObjectRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a GetObjectRequestPrivate object for MediaStoreData \a action,
 * with public implementation \a q.
 */
GetObjectRequestPrivate::GetObjectRequestPrivate(
    const MediaStoreDataRequest::Action action, GetObjectRequest * const q)
    : MediaStoreDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectRequest
 * class' copy constructor.
 */
GetObjectRequestPrivate::GetObjectRequestPrivate(
    const GetObjectRequestPrivate &other, GetObjectRequest * const q)
    : MediaStoreDataRequestPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
