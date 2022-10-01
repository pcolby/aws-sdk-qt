// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtruststorerequest.h"
#include "createtruststorerequest_p.h"
#include "createtruststoreresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreateTrustStoreRequest
 * \brief The CreateTrustStoreRequest class provides an interface for WorkSpacesWeb CreateTrustStore requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createTrustStore
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrustStoreRequest::CreateTrustStoreRequest(const CreateTrustStoreRequest &other)
    : WorkSpacesWebRequest(new CreateTrustStoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrustStoreRequest object.
 */
CreateTrustStoreRequest::CreateTrustStoreRequest()
    : WorkSpacesWebRequest(new CreateTrustStoreRequestPrivate(WorkSpacesWebRequest::CreateTrustStoreAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrustStoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrustStoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrustStoreRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrustStoreResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::CreateTrustStoreRequestPrivate
 * \brief The CreateTrustStoreRequestPrivate class provides private implementation for CreateTrustStoreRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreateTrustStoreRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
CreateTrustStoreRequestPrivate::CreateTrustStoreRequestPrivate(
    const WorkSpacesWebRequest::Action action, CreateTrustStoreRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrustStoreRequest
 * class' copy constructor.
 */
CreateTrustStoreRequestPrivate::CreateTrustStoreRequestPrivate(
    const CreateTrustStoreRequestPrivate &other, CreateTrustStoreRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
