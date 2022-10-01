// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONRECORDERREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONRECORDERREQUEST_P_H

#include "configservicerequest_p.h"
#include "putconfigurationrecorderrequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigurationRecorderRequest;

class PutConfigurationRecorderRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutConfigurationRecorderRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutConfigurationRecorderRequest * const q);
    PutConfigurationRecorderRequestPrivate(const PutConfigurationRecorderRequestPrivate &other,
                                   PutConfigurationRecorderRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationRecorderRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
