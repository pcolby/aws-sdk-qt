// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexportrequest.h"
#include "describeexportrequest_p.h"
#include "describeexportresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeExportRequest
 * \brief The DescribeExportRequest class provides an interface for LexModelsV2 DescribeExport requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeExport
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExportRequest::DescribeExportRequest(const DescribeExportRequest &other)
    : LexModelsV2Request(new DescribeExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExportRequest object.
 */
DescribeExportRequest::DescribeExportRequest()
    : LexModelsV2Request(new DescribeExportRequestPrivate(LexModelsV2Request::DescribeExportAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeExportRequestPrivate
 * \brief The DescribeExportRequestPrivate class provides private implementation for DescribeExportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeExportRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeExportRequestPrivate::DescribeExportRequestPrivate(
    const LexModelsV2Request::Action action, DescribeExportRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExportRequest
 * class' copy constructor.
 */
DescribeExportRequestPrivate::DescribeExportRequestPrivate(
    const DescribeExportRequestPrivate &other, DescribeExportRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
