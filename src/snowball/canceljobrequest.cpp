// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobrequest.h"
#include "canceljobrequest_p.h"
#include "canceljobresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CancelJobRequest
 * \brief The CancelJobRequest class provides an interface for Snowball CancelJob requests.
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
 * \sa SnowballClient::cancelJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelJobRequest::CancelJobRequest(const CancelJobRequest &other)
    : SnowballRequest(new CancelJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelJobRequest object.
 */
CancelJobRequest::CancelJobRequest()
    : SnowballRequest(new CancelJobRequestPrivate(SnowballRequest::CancelJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelJobResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::CancelJobRequestPrivate
 * \brief The CancelJobRequestPrivate class provides private implementation for CancelJobRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a CancelJobRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const SnowballRequest::Action action, CancelJobRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelJobRequest
 * class' copy constructor.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const CancelJobRequestPrivate &other, CancelJobRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
