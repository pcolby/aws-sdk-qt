// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEENHANCEDMONITORINGREQUEST_P_H
#define QTAWS_DISABLEENHANCEDMONITORINGREQUEST_P_H

#include "kinesisrequest_p.h"
#include "disableenhancedmonitoringrequest.h"

namespace QtAws {
namespace Kinesis {

class DisableEnhancedMonitoringRequest;

class DisableEnhancedMonitoringRequestPrivate : public KinesisRequestPrivate {

public:
    DisableEnhancedMonitoringRequestPrivate(const KinesisRequest::Action action,
                                   DisableEnhancedMonitoringRequest * const q);
    DisableEnhancedMonitoringRequestPrivate(const DisableEnhancedMonitoringRequestPrivate &other,
                                   DisableEnhancedMonitoringRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableEnhancedMonitoringRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
