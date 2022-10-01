// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLAUNCHREQUEST_P_H
#define QTAWS_STOPLAUNCHREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "stoplaunchrequest.h"

namespace QtAws {
namespace Evidently {

class StopLaunchRequest;

class StopLaunchRequestPrivate : public EvidentlyRequestPrivate {

public:
    StopLaunchRequestPrivate(const EvidentlyRequest::Action action,
                                   StopLaunchRequest * const q);
    StopLaunchRequestPrivate(const StopLaunchRequestPrivate &other,
                                   StopLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
