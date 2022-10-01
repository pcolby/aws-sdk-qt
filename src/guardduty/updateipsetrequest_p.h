// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPSETREQUEST_P_H
#define QTAWS_UPDATEIPSETREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "updateipsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateIPSetRequest;

class UpdateIPSetRequestPrivate : public GuardDutyRequestPrivate {

public:
    UpdateIPSetRequestPrivate(const GuardDutyRequest::Action action,
                                   UpdateIPSetRequest * const q);
    UpdateIPSetRequestPrivate(const UpdateIPSetRequestPrivate &other,
                                   UpdateIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIPSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
