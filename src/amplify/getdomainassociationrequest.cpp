// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainassociationrequest.h"
#include "getdomainassociationrequest_p.h"
#include "getdomainassociationresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetDomainAssociationRequest
 * \brief The GetDomainAssociationRequest class provides an interface for Amplify GetDomainAssociation requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getDomainAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainAssociationRequest::GetDomainAssociationRequest(const GetDomainAssociationRequest &other)
    : AmplifyRequest(new GetDomainAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainAssociationRequest object.
 */
GetDomainAssociationRequest::GetDomainAssociationRequest()
    : AmplifyRequest(new GetDomainAssociationRequestPrivate(AmplifyRequest::GetDomainAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainAssociationRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetDomainAssociationRequestPrivate
 * \brief The GetDomainAssociationRequestPrivate class provides private implementation for GetDomainAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetDomainAssociationRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetDomainAssociationRequestPrivate::GetDomainAssociationRequestPrivate(
    const AmplifyRequest::Action action, GetDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainAssociationRequest
 * class' copy constructor.
 */
GetDomainAssociationRequestPrivate::GetDomainAssociationRequestPrivate(
    const GetDomainAssociationRequestPrivate &other, GetDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
