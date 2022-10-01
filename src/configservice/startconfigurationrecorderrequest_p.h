// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGURATIONRECORDERREQUEST_P_H
#define QTAWS_STARTCONFIGURATIONRECORDERREQUEST_P_H

#include "configservicerequest_p.h"
#include "startconfigurationrecorderrequest.h"

namespace QtAws {
namespace ConfigService {

class StartConfigurationRecorderRequest;

class StartConfigurationRecorderRequestPrivate : public ConfigServiceRequestPrivate {

public:
    StartConfigurationRecorderRequestPrivate(const ConfigServiceRequest::Action action,
                                   StartConfigurationRecorderRequest * const q);
    StartConfigurationRecorderRequestPrivate(const StartConfigurationRecorderRequestPrivate &other,
                                   StartConfigurationRecorderRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartConfigurationRecorderRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
