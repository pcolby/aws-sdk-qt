// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONFIGURATIONRECORDERREQUEST_P_H
#define QTAWS_STOPCONFIGURATIONRECORDERREQUEST_P_H

#include "configservicerequest_p.h"
#include "stopconfigurationrecorderrequest.h"

namespace QtAws {
namespace ConfigService {

class StopConfigurationRecorderRequest;

class StopConfigurationRecorderRequestPrivate : public ConfigServiceRequestPrivate {

public:
    StopConfigurationRecorderRequestPrivate(const ConfigServiceRequest::Action action,
                                   StopConfigurationRecorderRequest * const q);
    StopConfigurationRecorderRequestPrivate(const StopConfigurationRecorderRequestPrivate &other,
                                   StopConfigurationRecorderRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopConfigurationRecorderRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
