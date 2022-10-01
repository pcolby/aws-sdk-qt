// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimportrequest.h"
#include "describeimportrequest_p.h"
#include "describeimportresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeImportRequest
 * \brief The DescribeImportRequest class provides an interface for LexModelsV2 DescribeImport requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeImport
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImportRequest::DescribeImportRequest(const DescribeImportRequest &other)
    : LexModelsV2Request(new DescribeImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImportRequest object.
 */
DescribeImportRequest::DescribeImportRequest()
    : LexModelsV2Request(new DescribeImportRequestPrivate(LexModelsV2Request::DescribeImportAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeImportRequestPrivate
 * \brief The DescribeImportRequestPrivate class provides private implementation for DescribeImportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeImportRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeImportRequestPrivate::DescribeImportRequestPrivate(
    const LexModelsV2Request::Action action, DescribeImportRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImportRequest
 * class' copy constructor.
 */
DescribeImportRequestPrivate::DescribeImportRequestPrivate(
    const DescribeImportRequestPrivate &other, DescribeImportRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
