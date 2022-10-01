// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTVOICECONNECTORLOGGINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "putvoiceconnectorloggingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorLoggingConfigurationRequest;

class PutVoiceConnectorLoggingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    PutVoiceConnectorLoggingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   PutVoiceConnectorLoggingConfigurationRequest * const q);
    PutVoiceConnectorLoggingConfigurationRequestPrivate(const PutVoiceConnectorLoggingConfigurationRequestPrivate &other,
                                   PutVoiceConnectorLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorLoggingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
