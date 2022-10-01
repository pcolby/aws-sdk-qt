// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHREATINTELSETREQUEST_P_H
#define QTAWS_DELETETHREATINTELSETREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "deletethreatintelsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteThreatIntelSetRequest;

class DeleteThreatIntelSetRequestPrivate : public GuardDutyRequestPrivate {

public:
    DeleteThreatIntelSetRequestPrivate(const GuardDutyRequest::Action action,
                                   DeleteThreatIntelSetRequest * const q);
    DeleteThreatIntelSetRequestPrivate(const DeleteThreatIntelSetRequestPrivate &other,
                                   DeleteThreatIntelSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThreatIntelSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
