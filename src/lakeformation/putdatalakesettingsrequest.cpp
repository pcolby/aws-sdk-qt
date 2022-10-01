/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
