// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEENHANCEDMONITORINGREQUEST_P_H
#define QTAWS_ENABLEENHANCEDMONITORINGREQUEST_P_H

#include "kinesisrequest_p.h"
#include "enableenhancedmonitoringrequest.h"

namespace QtAws {
namespace Kinesis {

class EnableEnhancedMonitoringRequest;

class EnableEnhancedMonitoringRequestPrivate : public KinesisRequestPrivate {

public:
    EnableEnhancedMonitoringRequestPrivate(const KinesisRequest::Action action,
                                   EnableEnhancedMonitoringRequest * const q);
    EnableEnhancedMonitoringRequestPrivate(const EnableEnhancedMonitoringRequestPrivate &other,
                                   EnableEnhancedMonitoringRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableEnhancedMonitoringRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
