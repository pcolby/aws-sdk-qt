// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterrequest.h"
#include "updateclusterrequest_p.h"
#include "updateclusterresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::UpdateClusterRequest
 * \brief The UpdateClusterRequest class provides an interface for Snowball UpdateCluster requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::updateCluster
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClusterRequest::UpdateClusterRequest(const UpdateClusterRequest &other)
    : SnowballRequest(new UpdateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClusterRequest object.
 */
UpdateClusterRequest::UpdateClusterRequest()
    : SnowballRequest(new UpdateClusterRequestPrivate(SnowballRequest::UpdateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::UpdateClusterRequestPrivate
 * \brief The UpdateClusterRequestPrivate class provides private implementation for UpdateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a UpdateClusterRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const SnowballRequest::Action action, UpdateClusterRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterRequest
 * class' copy constructor.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const UpdateClusterRequestPrivate &other, UpdateClusterRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
