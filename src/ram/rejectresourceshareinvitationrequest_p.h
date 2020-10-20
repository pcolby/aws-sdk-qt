/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_REJECTRESOURCESHAREINVITATIONREQUEST_P_H
#define QTAWS_REJECTRESOURCESHAREINVITATIONREQUEST_P_H

#include "ramrequest_p.h"
#include "rejectresourceshareinvitationrequest.h"

namespace QtAws {
namespace RAM {

class RejectResourceShareInvitationRequest;

class QTAWS_EXPORT RejectResourceShareInvitationRequestPrivate : public RamRequestPrivate {

public:
    RejectResourceShareInvitationRequestPrivate(const RamRequest::Action action,
                                   RejectResourceShareInvitationRequest * const q);
    RejectResourceShareInvitationRequestPrivate(const RejectResourceShareInvitationRequestPrivate &other,
                                   RejectResourceShareInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectResourceShareInvitationRequest)

};

} // namespace RAM
} // namespace QtAws

#endif
