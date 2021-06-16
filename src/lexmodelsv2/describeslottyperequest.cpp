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

#include "describeslottyperequest.h"
#include "describeslottyperequest_p.h"
#include "describeslottyperesponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeSlotTypeRequest
 * \brief The DescribeSlotTypeRequest class provides an interface for LexModelsV2 DescribeSlotType requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSlotTypeRequest::DescribeSlotTypeRequest(const DescribeSlotTypeRequest &other)
    : LexModelsV2Request(new DescribeSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSlotTypeRequest object.
 */
DescribeSlotTypeRequest::DescribeSlotTypeRequest()
    : LexModelsV2Request(new DescribeSlotTypeRequestPrivate(LexModelsV2Request::DescribeSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSlotTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSlotTypeResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeSlotTypeRequestPrivate
 * \brief The DescribeSlotTypeRequestPrivate class provides private implementation for DescribeSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeSlotTypeRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeSlotTypeRequestPrivate::DescribeSlotTypeRequestPrivate(
    const LexModelsV2Request::Action action, DescribeSlotTypeRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSlotTypeRequest
 * class' copy constructor.
 */
DescribeSlotTypeRequestPrivate::DescribeSlotTypeRequestPrivate(
    const DescribeSlotTypeRequestPrivate &other, DescribeSlotTypeRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
