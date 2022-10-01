// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainassociationrequest.h"
#include "deletedomainassociationrequest_p.h"
#include "deletedomainassociationresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteDomainAssociationRequest
 * \brief The DeleteDomainAssociationRequest class provides an interface for Amplify DeleteDomainAssociation requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteDomainAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainAssociationRequest::DeleteDomainAssociationRequest(const DeleteDomainAssociationRequest &other)
    : AmplifyRequest(new DeleteDomainAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainAssociationRequest object.
 */
DeleteDomainAssociationRequest::DeleteDomainAssociationRequest()
    : AmplifyRequest(new DeleteDomainAssociationRequestPrivate(AmplifyRequest::DeleteDomainAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteDomainAssociationRequestPrivate
 * \brief The DeleteDomainAssociationRequestPrivate class provides private implementation for DeleteDomainAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteDomainAssociationRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteDomainAssociationRequestPrivate::DeleteDomainAssociationRequestPrivate(
    const AmplifyRequest::Action action, DeleteDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainAssociationRequest
 * class' copy constructor.
 */
DeleteDomainAssociationRequestPrivate::DeleteDomainAssociationRequestPrivate(
    const DeleteDomainAssociationRequestPrivate &other, DeleteDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
