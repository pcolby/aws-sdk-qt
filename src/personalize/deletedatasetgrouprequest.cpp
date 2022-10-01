// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetgrouprequest.h"
#include "deletedatasetgrouprequest_p.h"
#include "deletedatasetgroupresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteDatasetGroupRequest
 * \brief The DeleteDatasetGroupRequest class provides an interface for Personalize DeleteDatasetGroup requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetGroupRequest::DeleteDatasetGroupRequest(const DeleteDatasetGroupRequest &other)
    : PersonalizeRequest(new DeleteDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetGroupRequest object.
 */
DeleteDatasetGroupRequest::DeleteDatasetGroupRequest()
    : PersonalizeRequest(new DeleteDatasetGroupRequestPrivate(PersonalizeRequest::DeleteDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteDatasetGroupRequestPrivate
 * \brief The DeleteDatasetGroupRequestPrivate class provides private implementation for DeleteDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteDatasetGroupRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteDatasetGroupRequestPrivate::DeleteDatasetGroupRequestPrivate(
    const PersonalizeRequest::Action action, DeleteDatasetGroupRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetGroupRequest
 * class' copy constructor.
 */
DeleteDatasetGroupRequestPrivate::DeleteDatasetGroupRequestPrivate(
    const DeleteDatasetGroupRequestPrivate &other, DeleteDatasetGroupRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
