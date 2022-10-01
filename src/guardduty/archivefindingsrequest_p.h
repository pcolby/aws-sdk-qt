// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ARCHIVEFINDINGSREQUEST_P_H
#define QTAWS_ARCHIVEFINDINGSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "archivefindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ArchiveFindingsRequest;

class ArchiveFindingsRequestPrivate : public GuardDutyRequestPrivate {

public:
    ArchiveFindingsRequestPrivate(const GuardDutyRequest::Action action,
                                   ArchiveFindingsRequest * const q);
    ArchiveFindingsRequestPrivate(const ArchiveFindingsRequestPrivate &other,
                                   ArchiveFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ArchiveFindingsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
