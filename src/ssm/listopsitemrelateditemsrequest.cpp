// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listopsitemrelateditemsrequest.h"
#include "listopsitemrelateditemsrequest_p.h"
#include "listopsitemrelateditemsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::ListOpsItemRelatedItemsRequest
 * \brief The ListOpsItemRelatedItemsRequest class provides an interface for Ssm ListOpsItemRelatedItems requests.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::listOpsItemRelatedItems
 */

/*!
 * Constructs a copy of \a other.
 */
ListOpsItemRelatedItemsRequest::ListOpsItemRelatedItemsRequest(const ListOpsItemRelatedItemsRequest &other)
    : SsmRequest(new ListOpsItemRelatedItemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOpsItemRelatedItemsRequest object.
 */
ListOpsItemRelatedItemsRequest::ListOpsItemRelatedItemsRequest()
    : SsmRequest(new ListOpsItemRelatedItemsRequestPrivate(SsmRequest::ListOpsItemRelatedItemsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOpsItemRelatedItemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOpsItemRelatedItemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOpsItemRelatedItemsRequest::response(QNetworkReply * const reply) const
{
    return new ListOpsItemRelatedItemsResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::ListOpsItemRelatedItemsRequestPrivate
 * \brief The ListOpsItemRelatedItemsRequestPrivate class provides private implementation for ListOpsItemRelatedItemsRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a ListOpsItemRelatedItemsRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
ListOpsItemRelatedItemsRequestPrivate::ListOpsItemRelatedItemsRequestPrivate(
    const SsmRequest::Action action, ListOpsItemRelatedItemsRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOpsItemRelatedItemsRequest
 * class' copy constructor.
 */
ListOpsItemRelatedItemsRequestPrivate::ListOpsItemRelatedItemsRequestPrivate(
    const ListOpsItemRelatedItemsRequestPrivate &other, ListOpsItemRelatedItemsRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
