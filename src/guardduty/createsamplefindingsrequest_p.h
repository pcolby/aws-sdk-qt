// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMPLEFINDINGSREQUEST_P_H
#define QTAWS_CREATESAMPLEFINDINGSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "createsamplefindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateSampleFindingsRequest;

class CreateSampleFindingsRequestPrivate : public GuardDutyRequestPrivate {

public:
    CreateSampleFindingsRequestPrivate(const GuardDutyRequest::Action action,
                                   CreateSampleFindingsRequest * const q);
    CreateSampleFindingsRequestPrivate(const CreateSampleFindingsRequestPrivate &other,
                                   CreateSampleFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSampleFindingsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
