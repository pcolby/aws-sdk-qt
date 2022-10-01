// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesrequest.h"
#include "listresourcesrequest_p.h"
#include "listresourcesresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListResourcesRequest
 * \brief The ListResourcesRequest class provides an interface for Ram ListResources requests.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::listResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourcesRequest::ListResourcesRequest(const ListResourcesRequest &other)
    : RamRequest(new ListResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourcesRequest object.
 */
ListResourcesRequest::ListResourcesRequest()
    : RamRequest(new ListResourcesRequestPrivate(RamRequest::ListResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::ListResourcesRequestPrivate
 * \brief The ListResourcesRequestPrivate class provides private implementation for ListResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListResourcesRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
ListResourcesRequestPrivate::ListResourcesRequestPrivate(
    const RamRequest::Action action, ListResourcesRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourcesRequest
 * class' copy constructor.
 */
ListResourcesRequestPrivate::ListResourcesRequestPrivate(
    const ListResourcesRequestPrivate &other, ListResourcesRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
