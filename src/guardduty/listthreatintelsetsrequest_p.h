// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHREATINTELSETSREQUEST_P_H
#define QTAWS_LISTTHREATINTELSETSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "listthreatintelsetsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListThreatIntelSetsRequest;

class ListThreatIntelSetsRequestPrivate : public GuardDutyRequestPrivate {

public:
    ListThreatIntelSetsRequestPrivate(const GuardDutyRequest::Action action,
                                   ListThreatIntelSetsRequest * const q);
    ListThreatIntelSetsRequestPrivate(const ListThreatIntelSetsRequestPrivate &other,
                                   ListThreatIntelSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThreatIntelSetsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
