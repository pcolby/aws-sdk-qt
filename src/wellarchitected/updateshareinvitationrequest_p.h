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

#ifndef QTAWS_UPDATESHAREINVITATIONREQUEST_P_H
#define QTAWS_UPDATESHAREINVITATIONREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "updateshareinvitationrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateShareInvitationRequest;

class QTAWS_EXPORT UpdateShareInvitationRequestPrivate : public WellArchitectedRequestPrivate {

public:
    UpdateShareInvitationRequestPrivate(const WellArchitectedRequest::Action action,
                                   UpdateShareInvitationRequest * const q);
    UpdateShareInvitationRequestPrivate(const UpdateShareInvitationRequestPrivate &other,
                                   UpdateShareInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateShareInvitationRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
