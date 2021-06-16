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
