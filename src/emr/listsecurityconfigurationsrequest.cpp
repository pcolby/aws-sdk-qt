// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsecurityconfigurationsrequest.h"
#include "listsecurityconfigurationsrequest_p.h"
#include "listsecurityconfigurationsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListSecurityConfigurationsRequest
 * \brief The ListSecurityConfigurationsRequest class provides an interface for Emr ListSecurityConfigurations requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listSecurityConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListSecurityConfigurationsRequest::ListSecurityConfigurationsRequest(const ListSecurityConfigurationsRequest &other)
    : EmrRequest(new ListSecurityConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSecurityConfigurationsRequest object.
 */
ListSecurityConfigurationsRequest::ListSecurityConfigurationsRequest()
    : EmrRequest(new ListSecurityConfigurationsRequestPrivate(EmrRequest::ListSecurityConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSecurityConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSecurityConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSecurityConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSecurityConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListSecurityConfigurationsRequestPrivate
 * \brief The ListSecurityConfigurationsRequestPrivate class provides private implementation for ListSecurityConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListSecurityConfigurationsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListSecurityConfigurationsRequestPrivate::ListSecurityConfigurationsRequestPrivate(
    const EmrRequest::Action action, ListSecurityConfigurationsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSecurityConfigurationsRequest
 * class' copy constructor.
 */
ListSecurityConfigurationsRequestPrivate::ListSecurityConfigurationsRequestPrivate(
    const ListSecurityConfigurationsRequestPrivate &other, ListSecurityConfigurationsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
