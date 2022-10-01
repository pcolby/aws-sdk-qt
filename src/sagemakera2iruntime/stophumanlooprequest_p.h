// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPHUMANLOOPREQUEST_P_H
#define QTAWS_STOPHUMANLOOPREQUEST_P_H

#include "sagemakera2iruntimerequest_p.h"
#include "stophumanlooprequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class StopHumanLoopRequest;

class StopHumanLoopRequestPrivate : public SageMakerA2IRuntimeRequestPrivate {

public:
    StopHumanLoopRequestPrivate(const SageMakerA2IRuntimeRequest::Action action,
                                   StopHumanLoopRequest * const q);
    StopHumanLoopRequestPrivate(const StopHumanLoopRequestPrivate &other,
                                   StopHumanLoopRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopHumanLoopRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
