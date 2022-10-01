// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createschemarequest.h"
#include "createschemarequest_p.h"
#include "createschemaresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateSchemaRequest
 * \brief The CreateSchemaRequest class provides an interface for Personalize CreateSchema requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createSchema
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSchemaRequest::CreateSchemaRequest(const CreateSchemaRequest &other)
    : PersonalizeRequest(new CreateSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSchemaRequest object.
 */
CreateSchemaRequest::CreateSchemaRequest()
    : PersonalizeRequest(new CreateSchemaRequestPrivate(PersonalizeRequest::CreateSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new CreateSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateSchemaRequestPrivate
 * \brief The CreateSchemaRequestPrivate class provides private implementation for CreateSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateSchemaRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const PersonalizeRequest::Action action, CreateSchemaRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSchemaRequest
 * class' copy constructor.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const CreateSchemaRequestPrivate &other, CreateSchemaRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
