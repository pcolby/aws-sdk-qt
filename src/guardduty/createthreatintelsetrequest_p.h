// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHREATINTELSETREQUEST_P_H
#define QTAWS_CREATETHREATINTELSETREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "createthreatintelsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateThreatIntelSetRequest;

class CreateThreatIntelSetRequestPrivate : public GuardDutyRequestPrivate {

public:
    CreateThreatIntelSetRequestPrivate(const GuardDutyRequest::Action action,
                                   CreateThreatIntelSetRequest * const q);
    CreateThreatIntelSetRequestPrivate(const CreateThreatIntelSetRequestPrivate &other,
                                   CreateThreatIntelSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateThreatIntelSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
