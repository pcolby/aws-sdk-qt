// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterresourcerequest.h"
#include "deregisterresourcerequest_p.h"
#include "deregisterresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeregisterResourceRequest
 * \brief The DeregisterResourceRequest class provides an interface for LakeFormation DeregisterResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deregisterResource
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterResourceRequest::DeregisterResourceRequest(const DeregisterResourceRequest &other)
    : LakeFormationRequest(new DeregisterResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterResourceRequest object.
 */
DeregisterResourceRequest::DeregisterResourceRequest()
    : LakeFormationRequest(new DeregisterResourceRequestPrivate(LakeFormationRequest::DeregisterResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterResourceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DeregisterResourceRequestPrivate
 * \brief The DeregisterResourceRequestPrivate class provides private implementation for DeregisterResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeregisterResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DeregisterResourceRequestPrivate::DeregisterResourceRequestPrivate(
    const LakeFormationRequest::Action action, DeregisterResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterResourceRequest
 * class' copy constructor.
 */
DeregisterResourceRequestPrivate::DeregisterResourceRequestPrivate(
    const DeregisterResourceRequestPrivate &other, DeregisterResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
