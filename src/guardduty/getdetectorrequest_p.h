// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORREQUEST_P_H
#define QTAWS_GETDETECTORREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getdetectorrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetDetectorRequest;

class GetDetectorRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetDetectorRequestPrivate(const GuardDutyRequest::Action action,
                                   GetDetectorRequest * const q);
    GetDetectorRequestPrivate(const GetDetectorRequestPrivate &other,
                                   GetDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDetectorRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
