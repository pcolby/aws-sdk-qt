// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCANARYREQUEST_P_H
#define QTAWS_STOPCANARYREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "stopcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class StopCanaryRequest;

class StopCanaryRequestPrivate : public SyntheticsRequestPrivate {

public:
    StopCanaryRequestPrivate(const SyntheticsRequest::Action action,
                                   StopCanaryRequest * const q);
    StopCanaryRequestPrivate(const StopCanaryRequestPrivate &other,
                                   StopCanaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
