// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERDETECTORSREQUEST_P_H
#define QTAWS_UPDATEMEMBERDETECTORSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "updatememberdetectorsrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateMemberDetectorsRequest;

class UpdateMemberDetectorsRequestPrivate : public GuardDutyRequestPrivate {

public:
    UpdateMemberDetectorsRequestPrivate(const GuardDutyRequest::Action action,
                                   UpdateMemberDetectorsRequest * const q);
    UpdateMemberDetectorsRequestPrivate(const UpdateMemberDetectorsRequestPrivate &other,
                                   UpdateMemberDetectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMemberDetectorsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
