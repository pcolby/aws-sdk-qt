// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelclusterrequest.h"
#include "cancelclusterrequest_p.h"
#include "cancelclusterresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CancelClusterRequest
 * \brief The CancelClusterRequest class provides an interface for Snowball CancelCluster requests.
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
 * \sa SnowballClient::cancelCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CancelClusterRequest::CancelClusterRequest(const CancelClusterRequest &other)
    : SnowballRequest(new CancelClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelClusterRequest object.
 */
CancelClusterRequest::CancelClusterRequest()
    : SnowballRequest(new CancelClusterRequestPrivate(SnowballRequest::CancelClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CancelClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelClusterRequest::response(QNetworkReply * const reply) const
{
    return new CancelClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::CancelClusterRequestPrivate
 * \brief The CancelClusterRequestPrivate class provides private implementation for CancelClusterRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a CancelClusterRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
CancelClusterRequestPrivate::CancelClusterRequestPrivate(
    const SnowballRequest::Action action, CancelClusterRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelClusterRequest
 * class' copy constructor.
 */
CancelClusterRequestPrivate::CancelClusterRequestPrivate(
    const CancelClusterRequestPrivate &other, CancelClusterRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
