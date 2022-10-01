// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstoragelensconfigurationrequest.h"
#include "putstoragelensconfigurationrequest_p.h"
#include "putstoragelensconfigurationresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationRequest
 * \brief The PutStorageLensConfigurationRequest class provides an interface for S3Control PutStorageLensConfiguration requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putStorageLensConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutStorageLensConfigurationRequest::PutStorageLensConfigurationRequest(const PutStorageLensConfigurationRequest &other)
    : S3ControlRequest(new PutStorageLensConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutStorageLensConfigurationRequest object.
 */
PutStorageLensConfigurationRequest::PutStorageLensConfigurationRequest()
    : S3ControlRequest(new PutStorageLensConfigurationRequestPrivate(S3ControlRequest::PutStorageLensConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutStorageLensConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutStorageLensConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutStorageLensConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutStorageLensConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationRequestPrivate
 * \brief The PutStorageLensConfigurationRequestPrivate class provides private implementation for PutStorageLensConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutStorageLensConfigurationRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutStorageLensConfigurationRequestPrivate::PutStorageLensConfigurationRequestPrivate(
    const S3ControlRequest::Action action, PutStorageLensConfigurationRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutStorageLensConfigurationRequest
 * class' copy constructor.
 */
PutStorageLensConfigurationRequestPrivate::PutStorageLensConfigurationRequestPrivate(
    const PutStorageLensConfigurationRequestPrivate &other, PutStorageLensConfigurationRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
