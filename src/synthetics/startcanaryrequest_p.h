// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCANARYREQUEST_P_H
#define QTAWS_STARTCANARYREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "startcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class StartCanaryRequest;

class StartCanaryRequestPrivate : public SyntheticsRequestPrivate {

public:
    StartCanaryRequestPrivate(const SyntheticsRequest::Action action,
                                   StartCanaryRequest * const q);
    StartCanaryRequestPrivate(const StartCanaryRequestPrivate &other,
                                   StartCanaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
