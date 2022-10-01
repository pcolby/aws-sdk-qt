// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
