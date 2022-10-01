// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbuiltinslottypesrequest.h"
#include "listbuiltinslottypesrequest_p.h"
#include "listbuiltinslottypesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBuiltInSlotTypesRequest
 * \brief The ListBuiltInSlotTypesRequest class provides an interface for LexModelsV2 ListBuiltInSlotTypes requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBuiltInSlotTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListBuiltInSlotTypesRequest::ListBuiltInSlotTypesRequest(const ListBuiltInSlotTypesRequest &other)
    : LexModelsV2Request(new ListBuiltInSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBuiltInSlotTypesRequest object.
 */
ListBuiltInSlotTypesRequest::ListBuiltInSlotTypesRequest()
    : LexModelsV2Request(new ListBuiltInSlotTypesRequestPrivate(LexModelsV2Request::ListBuiltInSlotTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBuiltInSlotTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBuiltInSlotTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBuiltInSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListBuiltInSlotTypesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBuiltInSlotTypesRequestPrivate
 * \brief The ListBuiltInSlotTypesRequestPrivate class provides private implementation for ListBuiltInSlotTypesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBuiltInSlotTypesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBuiltInSlotTypesRequestPrivate::ListBuiltInSlotTypesRequestPrivate(
    const LexModelsV2Request::Action action, ListBuiltInSlotTypesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBuiltInSlotTypesRequest
 * class' copy constructor.
 */
ListBuiltInSlotTypesRequestPrivate::ListBuiltInSlotTypesRequestPrivate(
    const ListBuiltInSlotTypesRequestPrivate &other, ListBuiltInSlotTypesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
