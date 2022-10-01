// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatetruststorerequest.h"
#include "disassociatetruststorerequest_p.h"
#include "disassociatetruststoreresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateTrustStoreRequest
 * \brief The DisassociateTrustStoreRequest class provides an interface for WorkSpacesWeb DisassociateTrustStore requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::disassociateTrustStore
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateTrustStoreRequest::DisassociateTrustStoreRequest(const DisassociateTrustStoreRequest &other)
    : WorkSpacesWebRequest(new DisassociateTrustStoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateTrustStoreRequest object.
 */
DisassociateTrustStoreRequest::DisassociateTrustStoreRequest()
    : WorkSpacesWebRequest(new DisassociateTrustStoreRequestPrivate(WorkSpacesWebRequest::DisassociateTrustStoreAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateTrustStoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateTrustStoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateTrustStoreRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateTrustStoreResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateTrustStoreRequestPrivate
 * \brief The DisassociateTrustStoreRequestPrivate class provides private implementation for DisassociateTrustStoreRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DisassociateTrustStoreRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
DisassociateTrustStoreRequestPrivate::DisassociateTrustStoreRequestPrivate(
    const WorkSpacesWebRequest::Action action, DisassociateTrustStoreRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateTrustStoreRequest
 * class' copy constructor.
 */
DisassociateTrustStoreRequestPrivate::DisassociateTrustStoreRequestPrivate(
    const DisassociateTrustStoreRequestPrivate &other, DisassociateTrustStoreRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
