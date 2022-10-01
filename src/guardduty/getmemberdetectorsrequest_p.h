// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERDETECTORSREQUEST_P_H
#define QTAWS_GETMEMBERDETECTORSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getmemberdetectorsrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetMemberDetectorsRequest;

class GetMemberDetectorsRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetMemberDetectorsRequestPrivate(const GuardDutyRequest::Action action,
                                   GetMemberDetectorsRequest * const q);
    GetMemberDetectorsRequestPrivate(const GetMemberDetectorsRequestPrivate &other,
                                   GetMemberDetectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMemberDetectorsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
