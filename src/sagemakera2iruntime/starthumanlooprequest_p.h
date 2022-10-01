// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTHUMANLOOPREQUEST_P_H
#define QTAWS_STARTHUMANLOOPREQUEST_P_H

#include "sagemakera2iruntimerequest_p.h"
#include "starthumanlooprequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class StartHumanLoopRequest;

class StartHumanLoopRequestPrivate : public SageMakerA2IRuntimeRequestPrivate {

public:
    StartHumanLoopRequestPrivate(const SageMakerA2IRuntimeRequest::Action action,
                                   StartHumanLoopRequest * const q);
    StartHumanLoopRequestPrivate(const StartHumanLoopRequestPrivate &other,
                                   StartHumanLoopRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartHumanLoopRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
