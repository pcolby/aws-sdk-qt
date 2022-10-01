// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHREATINTELSETREQUEST_P_H
#define QTAWS_UPDATETHREATINTELSETREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "updatethreatintelsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateThreatIntelSetRequest;

class UpdateThreatIntelSetRequestPrivate : public GuardDutyRequestPrivate {

public:
    UpdateThreatIntelSetRequestPrivate(const GuardDutyRequest::Action action,
                                   UpdateThreatIntelSetRequest * const q);
    UpdateThreatIntelSetRequestPrivate(const UpdateThreatIntelSetRequestPrivate &other,
                                   UpdateThreatIntelSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThreatIntelSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
