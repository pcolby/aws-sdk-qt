// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbucketrequest.h"
#include "createbucketrequest_p.h"
#include "createbucketresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateBucketRequest
 * \brief The CreateBucketRequest class provides an interface for S3Control CreateBucket requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createBucket
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBucketRequest::CreateBucketRequest(const CreateBucketRequest &other)
    : S3ControlRequest(new CreateBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBucketRequest object.
 */
CreateBucketRequest::CreateBucketRequest()
    : S3ControlRequest(new CreateBucketRequestPrivate(S3ControlRequest::CreateBucketAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBucketRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBucketResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBucketRequest::response(QNetworkReply * const reply) const
{
    return new CreateBucketResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::CreateBucketRequestPrivate
 * \brief The CreateBucketRequestPrivate class provides private implementation for CreateBucketRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateBucketRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
CreateBucketRequestPrivate::CreateBucketRequestPrivate(
    const S3ControlRequest::Action action, CreateBucketRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBucketRequest
 * class' copy constructor.
 */
CreateBucketRequestPrivate::CreateBucketRequestPrivate(
    const CreateBucketRequestPrivate &other, CreateBucketRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
