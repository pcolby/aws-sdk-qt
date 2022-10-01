// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHREATINTELSETREQUEST_P_H
#define QTAWS_GETTHREATINTELSETREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getthreatintelsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetThreatIntelSetRequest;

class GetThreatIntelSetRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetThreatIntelSetRequestPrivate(const GuardDutyRequest::Action action,
                                   GetThreatIntelSetRequest * const q);
    GetThreatIntelSetRequestPrivate(const GetThreatIntelSetRequestPrivate &other,
                                   GetThreatIntelSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetThreatIntelSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
