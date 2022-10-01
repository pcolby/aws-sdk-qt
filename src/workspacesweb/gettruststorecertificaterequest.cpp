/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gettruststorecertificaterequest.h"
#include "gettruststorecertificaterequest_p.h"
#include "gettruststorecertificateresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetTrustStoreCertificateRequest
 * \brief The GetTrustStoreCertificateRequest class provides an interface for WorkSpacesWeb GetTrustStoreCertificate requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getTrustStoreCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
GetTrustStoreCertificateRequest::GetTrustStoreCertificateRequest(const GetTrustStoreCertificateRequest &other)
    : WorkSpacesWebRequest(new GetTrustStoreCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTrustStoreCertificateRequest object.
 */
GetTrustStoreCertificateRequest::GetTrustStoreCertificateRequest()
    : WorkSpacesWebRequest(new GetTrustStoreCertificateRequestPrivate(WorkSpacesWebRequest::GetTrustStoreCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool GetTrustStoreCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTrustStoreCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTrustStoreCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GetTrustStoreCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::GetTrustStoreCertificateRequestPrivate
 * \brief The GetTrustStoreCertificateRequestPrivate class provides private implementation for GetTrustStoreCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetTrustStoreCertificateRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
GetTrustStoreCertificateRequestPrivate::GetTrustStoreCertificateRequestPrivate(
    const WorkSpacesWebRequest::Action action, GetTrustStoreCertificateRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTrustStoreCertificateRequest
 * class' copy constructor.
 */
GetTrustStoreCertificateRequestPrivate::GetTrustStoreCertificateRequestPrivate(
    const GetTrustStoreCertificateRequestPrivate &other, GetTrustStoreCertificateRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
