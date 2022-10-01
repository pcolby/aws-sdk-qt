// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerresourcerequest.h"
#include "registerresourcerequest_p.h"
#include "registerresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RegisterResourceRequest
 * \brief The RegisterResourceRequest class provides an interface for LakeFormation RegisterResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::registerResource
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterResourceRequest::RegisterResourceRequest(const RegisterResourceRequest &other)
    : LakeFormationRequest(new RegisterResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterResourceRequest object.
 */
RegisterResourceRequest::RegisterResourceRequest()
    : LakeFormationRequest(new RegisterResourceRequestPrivate(LakeFormationRequest::RegisterResourceAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterResourceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::RegisterResourceRequestPrivate
 * \brief The RegisterResourceRequestPrivate class provides private implementation for RegisterResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RegisterResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
RegisterResourceRequestPrivate::RegisterResourceRequestPrivate(
    const LakeFormationRequest::Action action, RegisterResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterResourceRequest
 * class' copy constructor.
 */
RegisterResourceRequestPrivate::RegisterResourceRequestPrivate(
    const RegisterResourceRequestPrivate &other, RegisterResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
