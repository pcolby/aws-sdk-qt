/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteworkgrouprequest.h"
#include "deleteworkgrouprequest_p.h"
#include "deleteworkgroupresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::DeleteWorkGroupRequest
 * \brief The DeleteWorkGroupRequest class provides an interface for Athena DeleteWorkGroup requests.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  If you connect to Athena using the JDBC driver, use version 1.1.0 of the driver or later with the Amazon Athena API.
 *  Earlier version drivers do not support the API. For more information and to download the driver, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing Amazon Athena with
 * 
 *  JDBC</a>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::deleteWorkGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkGroupRequest::DeleteWorkGroupRequest(const DeleteWorkGroupRequest &other)
    : AthenaRequest(new DeleteWorkGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkGroupRequest object.
 */
DeleteWorkGroupRequest::DeleteWorkGroupRequest()
    : AthenaRequest(new DeleteWorkGroupRequestPrivate(AthenaRequest::DeleteWorkGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Athena::DeleteWorkGroupRequestPrivate
 * \brief The DeleteWorkGroupRequestPrivate class provides private implementation for DeleteWorkGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a DeleteWorkGroupRequestPrivate object for Athena \a action,
 * with public implementation \a q.
 */
DeleteWorkGroupRequestPrivate::DeleteWorkGroupRequestPrivate(
    const AthenaRequest::Action action, DeleteWorkGroupRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkGroupRequest
 * class' copy constructor.
 */
DeleteWorkGroupRequestPrivate::DeleteWorkGroupRequestPrivate(
    const DeleteWorkGroupRequestPrivate &other, DeleteWorkGroupRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
