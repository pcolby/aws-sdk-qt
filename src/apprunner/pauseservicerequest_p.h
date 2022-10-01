// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSESERVICEREQUEST_P_H
#define QTAWS_PAUSESERVICEREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "pauseservicerequest.h"

namespace QtAws {
namespace AppRunner {

class PauseServiceRequest;

class PauseServiceRequestPrivate : public AppRunnerRequestPrivate {

public:
    PauseServiceRequestPrivate(const AppRunnerRequest::Action action,
                                   PauseServiceRequest * const q);
    PauseServiceRequestPrivate(const PauseServiceRequestPrivate &other,
                                   PauseServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(PauseServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
