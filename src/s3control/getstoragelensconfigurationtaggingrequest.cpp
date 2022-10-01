// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstoragelensconfigurationtaggingrequest.h"
#include "getstoragelensconfigurationtaggingrequest_p.h"
#include "getstoragelensconfigurationtaggingresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationTaggingRequest
 * \brief The GetStorageLensConfigurationTaggingRequest class provides an interface for S3Control GetStorageLensConfigurationTagging requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getStorageLensConfigurationTagging
 */

/*!
 * Constructs a copy of \a other.
 */
GetStorageLensConfigurationTaggingRequest::GetStorageLensConfigurationTaggingRequest(const GetStorageLensConfigurationTaggingRequest &other)
    : S3ControlRequest(new GetStorageLensConfigurationTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStorageLensConfigurationTaggingRequest object.
 */
GetStorageLensConfigurationTaggingRequest::GetStorageLensConfigurationTaggingRequest()
    : S3ControlRequest(new GetStorageLensConfigurationTaggingRequestPrivate(S3ControlRequest::GetStorageLensConfigurationTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool GetStorageLensConfigurationTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStorageLensConfigurationTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStorageLensConfigurationTaggingRequest::response(QNetworkReply * const reply) const
{
    return new GetStorageLensConfigurationTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationTaggingRequestPrivate
 * \brief The GetStorageLensConfigurationTaggingRequestPrivate class provides private implementation for GetStorageLensConfigurationTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetStorageLensConfigurationTaggingRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetStorageLensConfigurationTaggingRequestPrivate::GetStorageLensConfigurationTaggingRequestPrivate(
    const S3ControlRequest::Action action, GetStorageLensConfigurationTaggingRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStorageLensConfigurationTaggingRequest
 * class' copy constructor.
 */
GetStorageLensConfigurationTaggingRequestPrivate::GetStorageLensConfigurationTaggingRequestPrivate(
    const GetStorageLensConfigurationTaggingRequestPrivate &other, GetStorageLensConfigurationTaggingRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
