// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putdatalakesettingsrequest.h"
#include "putdatalakesettingsrequest_p.h"
#include "putdatalakesettingsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::PutDataLakeSettingsRequest
 * \brief The PutDataLakeSettingsRequest class provides an interface for LakeFormation PutDataLakeSettings requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::putDataLakeSettings
 */

/*!
 * Constructs a copy of \a other.
 */
PutDataLakeSettingsRequest::PutDataLakeSettingsRequest(const PutDataLakeSettingsRequest &other)
    : LakeFormationRequest(new PutDataLakeSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDataLakeSettingsRequest object.
 */
PutDataLakeSettingsRequest::PutDataLakeSettingsRequest()
    : LakeFormationRequest(new PutDataLakeSettingsRequestPrivate(LakeFormationRequest::PutDataLakeSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool PutDataLakeSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDataLakeSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDataLakeSettingsRequest::response(QNetworkReply * const reply) const
{
    return new PutDataLakeSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::PutDataLakeSettingsRequestPrivate
 * \brief The PutDataLakeSettingsRequestPrivate class provides private implementation for PutDataLakeSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a PutDataLakeSettingsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
PutDataLakeSettingsRequestPrivate::PutDataLakeSettingsRequestPrivate(
    const LakeFormationRequest::Action action, PutDataLakeSettingsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDataLakeSettingsRequest
 * class' copy constructor.
 */
PutDataLakeSettingsRequestPrivate::PutDataLakeSettingsRequestPrivate(
    const PutDataLakeSettingsRequestPrivate &other, PutDataLakeSettingsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
