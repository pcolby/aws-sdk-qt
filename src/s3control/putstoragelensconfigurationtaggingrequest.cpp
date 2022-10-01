// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstoragelensconfigurationtaggingrequest.h"
#include "putstoragelensconfigurationtaggingrequest_p.h"
#include "putstoragelensconfigurationtaggingresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationTaggingRequest
 * \brief The PutStorageLensConfigurationTaggingRequest class provides an interface for S3Control PutStorageLensConfigurationTagging requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putStorageLensConfigurationTagging
 */

/*!
 * Constructs a copy of \a other.
 */
PutStorageLensConfigurationTaggingRequest::PutStorageLensConfigurationTaggingRequest(const PutStorageLensConfigurationTaggingRequest &other)
    : S3ControlRequest(new PutStorageLensConfigurationTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutStorageLensConfigurationTaggingRequest object.
 */
PutStorageLensConfigurationTaggingRequest::PutStorageLensConfigurationTaggingRequest()
    : S3ControlRequest(new PutStorageLensConfigurationTaggingRequestPrivate(S3ControlRequest::PutStorageLensConfigurationTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool PutStorageLensConfigurationTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutStorageLensConfigurationTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutStorageLensConfigurationTaggingRequest::response(QNetworkReply * const reply) const
{
    return new PutStorageLensConfigurationTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationTaggingRequestPrivate
 * \brief The PutStorageLensConfigurationTaggingRequestPrivate class provides private implementation for PutStorageLensConfigurationTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutStorageLensConfigurationTaggingRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutStorageLensConfigurationTaggingRequestPrivate::PutStorageLensConfigurationTaggingRequestPrivate(
    const S3ControlRequest::Action action, PutStorageLensConfigurationTaggingRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutStorageLensConfigurationTaggingRequest
 * class' copy constructor.
 */
PutStorageLensConfigurationTaggingRequestPrivate::PutStorageLensConfigurationTaggingRequestPrivate(
    const PutStorageLensConfigurationTaggingRequestPrivate &other, PutStorageLensConfigurationTaggingRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
