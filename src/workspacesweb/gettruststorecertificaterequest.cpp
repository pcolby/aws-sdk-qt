// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
