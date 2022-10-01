// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsamlproviderrequest.h"
#include "getsamlproviderrequest_p.h"
#include "getsamlproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetSAMLProviderRequest
 * \brief The GetSAMLProviderRequest class provides an interface for Iam GetSAMLProvider requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::getSAMLProvider
 */

/*!
 * Constructs a copy of \a other.
 */
GetSAMLProviderRequest::GetSAMLProviderRequest(const GetSAMLProviderRequest &other)
    : IamRequest(new GetSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSAMLProviderRequest object.
 */
GetSAMLProviderRequest::GetSAMLProviderRequest()
    : IamRequest(new GetSAMLProviderRequestPrivate(IamRequest::GetSAMLProviderAction, this))
{

}

/*!
 * \reimp
 */
bool GetSAMLProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSAMLProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new GetSAMLProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetSAMLProviderRequestPrivate
 * \brief The GetSAMLProviderRequestPrivate class provides private implementation for GetSAMLProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetSAMLProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetSAMLProviderRequestPrivate::GetSAMLProviderRequestPrivate(
    const IamRequest::Action action, GetSAMLProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSAMLProviderRequest
 * class' copy constructor.
 */
GetSAMLProviderRequestPrivate::GetSAMLProviderRequestPrivate(
    const GetSAMLProviderRequestPrivate &other, GetSAMLProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
