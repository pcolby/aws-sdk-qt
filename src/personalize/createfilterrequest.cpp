// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfilterrequest.h"
#include "createfilterrequest_p.h"
#include "createfilterresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateFilterRequest
 * \brief The CreateFilterRequest class provides an interface for Personalize CreateFilter requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createFilter
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFilterRequest::CreateFilterRequest(const CreateFilterRequest &other)
    : PersonalizeRequest(new CreateFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFilterRequest object.
 */
CreateFilterRequest::CreateFilterRequest()
    : PersonalizeRequest(new CreateFilterRequestPrivate(PersonalizeRequest::CreateFilterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFilterRequest::response(QNetworkReply * const reply) const
{
    return new CreateFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateFilterRequestPrivate
 * \brief The CreateFilterRequestPrivate class provides private implementation for CreateFilterRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateFilterRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateFilterRequestPrivate::CreateFilterRequestPrivate(
    const PersonalizeRequest::Action action, CreateFilterRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFilterRequest
 * class' copy constructor.
 */
CreateFilterRequestPrivate::CreateFilterRequestPrivate(
    const CreateFilterRequestPrivate &other, CreateFilterRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
