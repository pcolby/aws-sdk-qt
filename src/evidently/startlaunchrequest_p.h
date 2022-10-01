// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLAUNCHREQUEST_P_H
#define QTAWS_STARTLAUNCHREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "startlaunchrequest.h"

namespace QtAws {
namespace Evidently {

class StartLaunchRequest;

class StartLaunchRequestPrivate : public EvidentlyRequestPrivate {

public:
    StartLaunchRequestPrivate(const EvidentlyRequest::Action action,
                                   StartLaunchRequest * const q);
    StartLaunchRequestPrivate(const StartLaunchRequestPrivate &other,
                                   StartLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
