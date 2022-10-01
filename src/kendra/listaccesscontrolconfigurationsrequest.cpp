// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesscontrolconfigurationsrequest.h"
#include "listaccesscontrolconfigurationsrequest_p.h"
#include "listaccesscontrolconfigurationsresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListAccessControlConfigurationsRequest
 * \brief The ListAccessControlConfigurationsRequest class provides an interface for Kendra ListAccessControlConfigurations requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listAccessControlConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccessControlConfigurationsRequest::ListAccessControlConfigurationsRequest(const ListAccessControlConfigurationsRequest &other)
    : KendraRequest(new ListAccessControlConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccessControlConfigurationsRequest object.
 */
ListAccessControlConfigurationsRequest::ListAccessControlConfigurationsRequest()
    : KendraRequest(new ListAccessControlConfigurationsRequestPrivate(KendraRequest::ListAccessControlConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccessControlConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccessControlConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccessControlConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAccessControlConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListAccessControlConfigurationsRequestPrivate
 * \brief The ListAccessControlConfigurationsRequestPrivate class provides private implementation for ListAccessControlConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListAccessControlConfigurationsRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListAccessControlConfigurationsRequestPrivate::ListAccessControlConfigurationsRequestPrivate(
    const KendraRequest::Action action, ListAccessControlConfigurationsRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccessControlConfigurationsRequest
 * class' copy constructor.
 */
ListAccessControlConfigurationsRequestPrivate::ListAccessControlConfigurationsRequestPrivate(
    const ListAccessControlConfigurationsRequestPrivate &other, ListAccessControlConfigurationsRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
