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

#include "describejournals3exportrequest.h"
#include "describejournals3exportrequest_p.h"
#include "describejournals3exportresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::DescribeJournalS3ExportRequest
 * \brief The DescribeJournalS3ExportRequest class provides an interface for Qldb DescribeJournalS3Export requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::describeJournalS3Export
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJournalS3ExportRequest::DescribeJournalS3ExportRequest(const DescribeJournalS3ExportRequest &other)
    : QldbRequest(new DescribeJournalS3ExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJournalS3ExportRequest object.
 */
DescribeJournalS3ExportRequest::DescribeJournalS3ExportRequest()
    : QldbRequest(new DescribeJournalS3ExportRequestPrivate(QldbRequest::DescribeJournalS3ExportAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJournalS3ExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJournalS3ExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJournalS3ExportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJournalS3ExportResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::DescribeJournalS3ExportRequestPrivate
 * \brief The DescribeJournalS3ExportRequestPrivate class provides private implementation for DescribeJournalS3ExportRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a DescribeJournalS3ExportRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
DescribeJournalS3ExportRequestPrivate::DescribeJournalS3ExportRequestPrivate(
    const QldbRequest::Action action, DescribeJournalS3ExportRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJournalS3ExportRequest
 * class' copy constructor.
 */
DescribeJournalS3ExportRequestPrivate::DescribeJournalS3ExportRequestPrivate(
    const DescribeJournalS3ExportRequestPrivate &other, DescribeJournalS3ExportRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
