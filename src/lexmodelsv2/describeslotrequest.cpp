// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
