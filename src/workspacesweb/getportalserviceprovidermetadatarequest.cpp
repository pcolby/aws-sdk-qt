// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getportalserviceprovidermetadatarequest.h"
#include "getportalserviceprovidermetadatarequest_p.h"
#include "getportalserviceprovidermetadataresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetPortalServiceProviderMetadataRequest
 * \brief The GetPortalServiceProviderMetadataRequest class provides an interface for WorkSpacesWeb GetPortalServiceProviderMetadata requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getPortalServiceProviderMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetPortalServiceProviderMetadataRequest::GetPortalServiceProviderMetadataRequest(const GetPortalServiceProviderMetadataRequest &other)
    : WorkSpacesWebRequest(new GetPortalServiceProviderMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPortalServiceProviderMetadataRequest object.
 */
GetPortalServiceProviderMetadataRequest::GetPortalServiceProviderMetadataRequest()
    : WorkSpacesWebRequest(new GetPortalServiceProviderMetadataRequestPrivate(WorkSpacesWebRequest::GetPortalServiceProviderMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetPortalServiceProviderMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPortalServiceProviderMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPortalServiceProviderMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetPortalServiceProviderMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::GetPortalServiceProviderMetadataRequestPrivate
 * \brief The GetPortalServiceProviderMetadataRequestPrivate class provides private implementation for GetPortalServiceProviderMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetPortalServiceProviderMetadataRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
GetPortalServiceProviderMetadataRequestPrivate::GetPortalServiceProviderMetadataRequestPrivate(
    const WorkSpacesWebRequest::Action action, GetPortalServiceProviderMetadataRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPortalServiceProviderMetadataRequest
 * class' copy constructor.
 */
GetPortalServiceProviderMetadataRequestPrivate::GetPortalServiceProviderMetadataRequestPrivate(
    const GetPortalServiceProviderMetadataRequestPrivate &other, GetPortalServiceProviderMetadataRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
