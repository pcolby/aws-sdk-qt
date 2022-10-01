// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNARCHIVEFINDINGSREQUEST_P_H
#define QTAWS_UNARCHIVEFINDINGSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "unarchivefindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class UnarchiveFindingsRequest;

class UnarchiveFindingsRequestPrivate : public GuardDutyRequestPrivate {

public:
    UnarchiveFindingsRequestPrivate(const GuardDutyRequest::Action action,
                                   UnarchiveFindingsRequest * const q);
    UnarchiveFindingsRequestPrivate(const UnarchiveFindingsRequestPrivate &other,
                                   UnarchiveFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnarchiveFindingsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
