// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefilterrequest.h"
#include "deletefilterrequest_p.h"
#include "deletefilterresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteFilterRequest
 * \brief The DeleteFilterRequest class provides an interface for Personalize DeleteFilter requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFilterRequest::DeleteFilterRequest(const DeleteFilterRequest &other)
    : PersonalizeRequest(new DeleteFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFilterRequest object.
 */
DeleteFilterRequest::DeleteFilterRequest()
    : PersonalizeRequest(new DeleteFilterRequestPrivate(PersonalizeRequest::DeleteFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteFilterRequestPrivate
 * \brief The DeleteFilterRequestPrivate class provides private implementation for DeleteFilterRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteFilterRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteFilterRequestPrivate::DeleteFilterRequestPrivate(
    const PersonalizeRequest::Action action, DeleteFilterRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFilterRequest
 * class' copy constructor.
 */
DeleteFilterRequestPrivate::DeleteFilterRequestPrivate(
    const DeleteFilterRequestPrivate &other, DeleteFilterRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
