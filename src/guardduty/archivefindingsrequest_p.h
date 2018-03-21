/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ARCHIVEFINDINGSREQUEST_P_H
#define QTAWS_ARCHIVEFINDINGSREQUEST_P_H

#include "guardduty_p.h"
#include "archivefindingsrequest.h"

namespace AWS {

namespace GuardDuty {

class ArchiveFindingsRequest;

class QTAWS_EXPORT ArchiveFindingsRequestPrivate : public GuardDutyPrivate {

public:
    ArchiveFindingsRequestPrivate(const GuardDuty::Action action,
                                   ArchiveFindingsRequest * const q);
    ArchiveFindingsRequestPrivate(const ArchiveFindingsRequestPrivate &other,
                                   ArchiveFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ArchiveFindingsRequest)

};

} // namespace GuardDuty
} // namespace AWS

#endif
