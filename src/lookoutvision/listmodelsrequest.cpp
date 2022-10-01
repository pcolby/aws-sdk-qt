// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelsrequest.h"
#include "listmodelsrequest_p.h"
#include "listmodelsresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::ListModelsRequest
 * \brief The ListModelsRequest class provides an interface for LookoutVision ListModels requests.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::listModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelsRequest::ListModelsRequest(const ListModelsRequest &other)
    : LookoutVisionRequest(new ListModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelsRequest object.
 */
ListModelsRequest::ListModelsRequest()
    : LookoutVisionRequest(new ListModelsRequestPrivate(LookoutVisionRequest::ListModelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListModelsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::ListModelsRequestPrivate
 * \brief The ListModelsRequestPrivate class provides private implementation for ListModelsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a ListModelsRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
ListModelsRequestPrivate::ListModelsRequestPrivate(
    const LookoutVisionRequest::Action action, ListModelsRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelsRequest
 * class' copy constructor.
 */
ListModelsRequestPrivate::ListModelsRequestPrivate(
    const ListModelsRequestPrivate &other, ListModelsRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
