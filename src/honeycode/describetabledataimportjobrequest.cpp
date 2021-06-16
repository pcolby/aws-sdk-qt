/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
