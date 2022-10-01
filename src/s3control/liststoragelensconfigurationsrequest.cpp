// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststoragelensconfigurationsrequest.h"
#include "liststoragelensconfigurationsrequest_p.h"
#include "liststoragelensconfigurationsresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListStorageLensConfigurationsRequest
 * \brief The ListStorageLensConfigurationsRequest class provides an interface for S3Control ListStorageLensConfigurations requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listStorageLensConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListStorageLensConfigurationsRequest::ListStorageLensConfigurationsRequest(const ListStorageLensConfigurationsRequest &other)
    : S3ControlRequest(new ListStorageLensConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStorageLensConfigurationsRequest object.
 */
ListStorageLensConfigurationsRequest::ListStorageLensConfigurationsRequest()
    : S3ControlRequest(new ListStorageLensConfigurationsRequestPrivate(S3ControlRequest::ListStorageLensConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStorageLensConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStorageLensConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStorageLensConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListStorageLensConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::ListStorageLensConfigurationsRequestPrivate
 * \brief The ListStorageLensConfigurationsRequestPrivate class provides private implementation for ListStorageLensConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListStorageLensConfigurationsRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
ListStorageLensConfigurationsRequestPrivate::ListStorageLensConfigurationsRequestPrivate(
    const S3ControlRequest::Action action, ListStorageLensConfigurationsRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStorageLensConfigurationsRequest
 * class' copy constructor.
 */
ListStorageLensConfigurationsRequestPrivate::ListStorageLensConfigurationsRequestPrivate(
    const ListStorageLensConfigurationsRequestPrivate &other, ListStorageLensConfigurationsRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
