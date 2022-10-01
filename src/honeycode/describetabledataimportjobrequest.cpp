// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetabledataimportjobrequest.h"
#include "describetabledataimportjobrequest_p.h"
#include "describetabledataimportjobresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::DescribeTableDataImportJobRequest
 * \brief The DescribeTableDataImportJobRequest class provides an interface for Honeycode DescribeTableDataImportJob requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::describeTableDataImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTableDataImportJobRequest::DescribeTableDataImportJobRequest(const DescribeTableDataImportJobRequest &other)
    : HoneycodeRequest(new DescribeTableDataImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTableDataImportJobRequest object.
 */
DescribeTableDataImportJobRequest::DescribeTableDataImportJobRequest()
    : HoneycodeRequest(new DescribeTableDataImportJobRequestPrivate(HoneycodeRequest::DescribeTableDataImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTableDataImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTableDataImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTableDataImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTableDataImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::DescribeTableDataImportJobRequestPrivate
 * \brief The DescribeTableDataImportJobRequestPrivate class provides private implementation for DescribeTableDataImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a DescribeTableDataImportJobRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
DescribeTableDataImportJobRequestPrivate::DescribeTableDataImportJobRequestPrivate(
    const HoneycodeRequest::Action action, DescribeTableDataImportJobRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTableDataImportJobRequest
 * class' copy constructor.
 */
DescribeTableDataImportJobRequestPrivate::DescribeTableDataImportJobRequestPrivate(
    const DescribeTableDataImportJobRequestPrivate &other, DescribeTableDataImportJobRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
