// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasourcerequest.h"
#include "createdatasourcerequest_p.h"
#include "createdatasourceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateDataSourceRequest
 * \brief The CreateDataSourceRequest class provides an interface for Kendra CreateDataSource requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSourceRequest::CreateDataSourceRequest(const CreateDataSourceRequest &other)
    : KendraRequest(new CreateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSourceRequest object.
 */
CreateDataSourceRequest::CreateDataSourceRequest()
    : KendraRequest(new CreateDataSourceRequestPrivate(KendraRequest::CreateDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateDataSourceRequestPrivate
 * \brief The CreateDataSourceRequestPrivate class provides private implementation for CreateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateDataSourceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const KendraRequest::Action action, CreateDataSourceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceRequest
 * class' copy constructor.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const CreateDataSourceRequestPrivate &other, CreateDataSourceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
