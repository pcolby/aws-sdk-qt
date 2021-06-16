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

#include "describeslotrequest.h"
#include "describeslotrequest_p.h"
#include "describeslotresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeSlotRequest
 * \brief The DescribeSlotRequest class provides an interface for LexModelsV2 DescribeSlot requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeSlot
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSlotRequest::DescribeSlotRequest(const DescribeSlotRequest &other)
    : LexModelsV2Request(new DescribeSlotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSlotRequest object.
 */
DescribeSlotRequest::DescribeSlotRequest()
    : LexModelsV2Request(new DescribeSlotRequestPrivate(LexModelsV2Request::DescribeSlotAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSlotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSlotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSlotRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSlotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeSlotRequestPrivate
 * \brief The DescribeSlotRequestPrivate class provides private implementation for DescribeSlotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeSlotRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeSlotRequestPrivate::DescribeSlotRequestPrivate(
    const LexModelsV2Request::Action action, DescribeSlotRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSlotRequest
 * class' copy constructor.
 */
DescribeSlotRequestPrivate::DescribeSlotRequestPrivate(
    const DescribeSlotRequestPrivate &other, DescribeSlotRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
