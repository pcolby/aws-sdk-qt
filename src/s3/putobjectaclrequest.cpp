// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectaclrequest.h"
#include "putobjectaclrequest_p.h"
#include "putobjectaclresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectAclRequest
 * \brief The PutObjectAclRequest class provides an interface for S3 PutObjectAcl requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectAcl
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectAclRequest::PutObjectAclRequest(const PutObjectAclRequest &other)
    : S3Request(new PutObjectAclRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectAclRequest object.
 */
PutObjectAclRequest::PutObjectAclRequest()
    : S3Request(new PutObjectAclRequestPrivate(S3Request::PutObjectAclAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectAclRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectAclResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectAclRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectAclResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectAclRequestPrivate
 * \brief The PutObjectAclRequestPrivate class provides private implementation for PutObjectAclRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectAclRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectAclRequestPrivate::PutObjectAclRequestPrivate(
    const S3Request::Action action, PutObjectAclRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectAclRequest
 * class' copy constructor.
 */
PutObjectAclRequestPrivate::PutObjectAclRequestPrivate(
    const PutObjectAclRequestPrivate &other, PutObjectAclRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
