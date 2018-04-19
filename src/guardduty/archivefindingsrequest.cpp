/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "archivefindingsrequest.h"
#include "archivefindingsrequest_p.h"
#include "archivefindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ArchiveFindingsRequest
 * \brief The ArchiveFindingsRequest class provides an interface for GuardDuty ArchiveFindings requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::archiveFindings
 */

/*!
 * Constructs a copy of \a other.
 */
ArchiveFindingsRequest::ArchiveFindingsRequest(const ArchiveFindingsRequest &other)
    : GuardDutyRequest(new ArchiveFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ArchiveFindingsRequest object.
 */
ArchiveFindingsRequest::ArchiveFindingsRequest()
    : GuardDutyRequest(new ArchiveFindingsRequestPrivate(GuardDutyRequest::ArchiveFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool ArchiveFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ArchiveFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ArchiveFindingsRequest::response(QNetworkReply * const reply) const
{
    return new ArchiveFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::ArchiveFindingsRequestPrivate
 * \brief The ArchiveFindingsRequestPrivate class provides private implementation for ArchiveFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ArchiveFindingsRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
ArchiveFindingsRequestPrivate::ArchiveFindingsRequestPrivate(
    const GuardDutyRequest::Action action, ArchiveFindingsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ArchiveFindingsRequest
 * class' copy constructor.
 */
ArchiveFindingsRequestPrivate::ArchiveFindingsRequestPrivate(
    const ArchiveFindingsRequestPrivate &other, ArchiveFindingsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
