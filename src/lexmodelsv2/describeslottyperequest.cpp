// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
