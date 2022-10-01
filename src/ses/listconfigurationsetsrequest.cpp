// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationsetsrequest.h"
#include "listconfigurationsetsrequest_p.h"
#include "listconfigurationsetsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListConfigurationSetsRequest
 * \brief The ListConfigurationSetsRequest class provides an interface for Ses ListConfigurationSets requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::listConfigurationSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationSetsRequest::ListConfigurationSetsRequest(const ListConfigurationSetsRequest &other)
    : SesRequest(new ListConfigurationSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationSetsRequest object.
 */
ListConfigurationSetsRequest::ListConfigurationSetsRequest()
    : SesRequest(new ListConfigurationSetsRequestPrivate(SesRequest::ListConfigurationSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConfigurationSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConfigurationSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConfigurationSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ListConfigurationSetsRequestPrivate
 * \brief The ListConfigurationSetsRequestPrivate class provides private implementation for ListConfigurationSetsRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListConfigurationSetsRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListConfigurationSetsRequestPrivate::ListConfigurationSetsRequestPrivate(
    const SesRequest::Action action, ListConfigurationSetsRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationSetsRequest
 * class' copy constructor.
 */
ListConfigurationSetsRequestPrivate::ListConfigurationSetsRequestPrivate(
    const ListConfigurationSetsRequestPrivate &other, ListConfigurationSetsRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
