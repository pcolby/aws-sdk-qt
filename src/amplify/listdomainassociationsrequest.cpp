// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainassociationsrequest.h"
#include "listdomainassociationsrequest_p.h"
#include "listdomainassociationsresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListDomainAssociationsRequest
 * \brief The ListDomainAssociationsRequest class provides an interface for Amplify ListDomainAssociations requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listDomainAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainAssociationsRequest::ListDomainAssociationsRequest(const ListDomainAssociationsRequest &other)
    : AmplifyRequest(new ListDomainAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainAssociationsRequest object.
 */
ListDomainAssociationsRequest::ListDomainAssociationsRequest()
    : AmplifyRequest(new ListDomainAssociationsRequestPrivate(AmplifyRequest::ListDomainAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListDomainAssociationsRequestPrivate
 * \brief The ListDomainAssociationsRequestPrivate class provides private implementation for ListDomainAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListDomainAssociationsRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListDomainAssociationsRequestPrivate::ListDomainAssociationsRequestPrivate(
    const AmplifyRequest::Action action, ListDomainAssociationsRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainAssociationsRequest
 * class' copy constructor.
 */
ListDomainAssociationsRequestPrivate::ListDomainAssociationsRequestPrivate(
    const ListDomainAssociationsRequestPrivate &other, ListDomainAssociationsRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
