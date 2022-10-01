// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteschemarequest.h"
#include "deleteschemarequest_p.h"
#include "deleteschemaresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteSchemaRequest
 * \brief The DeleteSchemaRequest class provides an interface for Personalize DeleteSchema requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteSchema
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSchemaRequest::DeleteSchemaRequest(const DeleteSchemaRequest &other)
    : PersonalizeRequest(new DeleteSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSchemaRequest object.
 */
DeleteSchemaRequest::DeleteSchemaRequest()
    : PersonalizeRequest(new DeleteSchemaRequestPrivate(PersonalizeRequest::DeleteSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteSchemaRequestPrivate
 * \brief The DeleteSchemaRequestPrivate class provides private implementation for DeleteSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteSchemaRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteSchemaRequestPrivate::DeleteSchemaRequestPrivate(
    const PersonalizeRequest::Action action, DeleteSchemaRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSchemaRequest
 * class' copy constructor.
 */
DeleteSchemaRequestPrivate::DeleteSchemaRequestPrivate(
    const DeleteSchemaRequestPrivate &other, DeleteSchemaRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
