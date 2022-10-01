// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesamlproviderrequest.h"
#include "deletesamlproviderrequest_p.h"
#include "deletesamlproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteSAMLProviderRequest
 * \brief The DeleteSAMLProviderRequest class provides an interface for Iam DeleteSAMLProvider requests.
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
 * \sa IamClient::deleteSAMLProvider
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSAMLProviderRequest::DeleteSAMLProviderRequest(const DeleteSAMLProviderRequest &other)
    : IamRequest(new DeleteSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSAMLProviderRequest object.
 */
DeleteSAMLProviderRequest::DeleteSAMLProviderRequest()
    : IamRequest(new DeleteSAMLProviderRequestPrivate(IamRequest::DeleteSAMLProviderAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSAMLProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSAMLProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSAMLProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteSAMLProviderRequestPrivate
 * \brief The DeleteSAMLProviderRequestPrivate class provides private implementation for DeleteSAMLProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteSAMLProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteSAMLProviderRequestPrivate::DeleteSAMLProviderRequestPrivate(
    const IamRequest::Action action, DeleteSAMLProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSAMLProviderRequest
 * class' copy constructor.
 */
DeleteSAMLProviderRequestPrivate::DeleteSAMLProviderRequestPrivate(
    const DeleteSAMLProviderRequestPrivate &other, DeleteSAMLProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
