// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORREQUEST_P_H
#define QTAWS_CREATEDETECTORREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "createdetectorrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateDetectorRequest;

class CreateDetectorRequestPrivate : public GuardDutyRequestPrivate {

public:
    CreateDetectorRequestPrivate(const GuardDutyRequest::Action action,
                                   CreateDetectorRequest * const q);
    CreateDetectorRequestPrivate(const CreateDetectorRequestPrivate &other,
                                   CreateDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDetectorRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
