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
