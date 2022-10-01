// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORREQUEST_P_H
#define QTAWS_UPDATEDETECTORREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "updatedetectorrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateDetectorRequest;

class UpdateDetectorRequestPrivate : public GuardDutyRequestPrivate {

public:
    UpdateDetectorRequestPrivate(const GuardDutyRequest::Action action,
                                   UpdateDetectorRequest * const q);
    UpdateDetectorRequestPrivate(const UpdateDetectorRequestPrivate &other,
                                   UpdateDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
