// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategrouprequest.h"
#include "updategrouprequest_p.h"
#include "updategroupresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateGroupRequest
 * \brief The UpdateGroupRequest class provides an interface for Iam UpdateGroup requests.
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
 * \sa IamClient::updateGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest &other)
    : IamRequest(new UpdateGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGroupRequest object.
 */
UpdateGroupRequest::UpdateGroupRequest()
    : IamRequest(new UpdateGroupRequestPrivate(IamRequest::UpdateGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateGroupRequestPrivate
 * \brief The UpdateGroupRequestPrivate class provides private implementation for UpdateGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateGroupRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const IamRequest::Action action, UpdateGroupRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupRequest
 * class' copy constructor.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const UpdateGroupRequestPrivate &other, UpdateGroupRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
