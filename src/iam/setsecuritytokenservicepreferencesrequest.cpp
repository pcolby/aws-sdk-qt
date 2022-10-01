// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setsecuritytokenservicepreferencesrequest.h"
#include "setsecuritytokenservicepreferencesrequest_p.h"
#include "setsecuritytokenservicepreferencesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::SetSecurityTokenServicePreferencesRequest
 * \brief The SetSecurityTokenServicePreferencesRequest class provides an interface for Iam SetSecurityTokenServicePreferences requests.
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
 * \sa IamClient::setSecurityTokenServicePreferences
 */

/*!
 * Constructs a copy of \a other.
 */
SetSecurityTokenServicePreferencesRequest::SetSecurityTokenServicePreferencesRequest(const SetSecurityTokenServicePreferencesRequest &other)
    : IamRequest(new SetSecurityTokenServicePreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetSecurityTokenServicePreferencesRequest object.
 */
SetSecurityTokenServicePreferencesRequest::SetSecurityTokenServicePreferencesRequest()
    : IamRequest(new SetSecurityTokenServicePreferencesRequestPrivate(IamRequest::SetSecurityTokenServicePreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool SetSecurityTokenServicePreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetSecurityTokenServicePreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetSecurityTokenServicePreferencesRequest::response(QNetworkReply * const reply) const
{
    return new SetSecurityTokenServicePreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::SetSecurityTokenServicePreferencesRequestPrivate
 * \brief The SetSecurityTokenServicePreferencesRequestPrivate class provides private implementation for SetSecurityTokenServicePreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a SetSecurityTokenServicePreferencesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
SetSecurityTokenServicePreferencesRequestPrivate::SetSecurityTokenServicePreferencesRequestPrivate(
    const IamRequest::Action action, SetSecurityTokenServicePreferencesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetSecurityTokenServicePreferencesRequest
 * class' copy constructor.
 */
SetSecurityTokenServicePreferencesRequestPrivate::SetSecurityTokenServicePreferencesRequestPrivate(
    const SetSecurityTokenServicePreferencesRequestPrivate &other, SetSecurityTokenServicePreferencesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
