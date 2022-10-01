// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicelastaccesseddetailswithentitiesrequest.h"
#include "getservicelastaccesseddetailswithentitiesrequest_p.h"
#include "getservicelastaccesseddetailswithentitiesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetServiceLastAccessedDetailsWithEntitiesRequest
 * \brief The GetServiceLastAccessedDetailsWithEntitiesRequest class provides an interface for Iam GetServiceLastAccessedDetailsWithEntities requests.
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
 * \sa IamClient::getServiceLastAccessedDetailsWithEntities
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceLastAccessedDetailsWithEntitiesRequest::GetServiceLastAccessedDetailsWithEntitiesRequest(const GetServiceLastAccessedDetailsWithEntitiesRequest &other)
    : IamRequest(new GetServiceLastAccessedDetailsWithEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceLastAccessedDetailsWithEntitiesRequest object.
 */
GetServiceLastAccessedDetailsWithEntitiesRequest::GetServiceLastAccessedDetailsWithEntitiesRequest()
    : IamRequest(new GetServiceLastAccessedDetailsWithEntitiesRequestPrivate(IamRequest::GetServiceLastAccessedDetailsWithEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceLastAccessedDetailsWithEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceLastAccessedDetailsWithEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceLastAccessedDetailsWithEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceLastAccessedDetailsWithEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetServiceLastAccessedDetailsWithEntitiesRequestPrivate
 * \brief The GetServiceLastAccessedDetailsWithEntitiesRequestPrivate class provides private implementation for GetServiceLastAccessedDetailsWithEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetServiceLastAccessedDetailsWithEntitiesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetServiceLastAccessedDetailsWithEntitiesRequestPrivate::GetServiceLastAccessedDetailsWithEntitiesRequestPrivate(
    const IamRequest::Action action, GetServiceLastAccessedDetailsWithEntitiesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceLastAccessedDetailsWithEntitiesRequest
 * class' copy constructor.
 */
GetServiceLastAccessedDetailsWithEntitiesRequestPrivate::GetServiceLastAccessedDetailsWithEntitiesRequestPrivate(
    const GetServiceLastAccessedDetailsWithEntitiesRequestPrivate &other, GetServiceLastAccessedDetailsWithEntitiesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
