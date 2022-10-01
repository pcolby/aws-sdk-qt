// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETVOICECONNECTORLOGGINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectorloggingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorLoggingConfigurationRequest;

class GetVoiceConnectorLoggingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorLoggingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorLoggingConfigurationRequest * const q);
    GetVoiceConnectorLoggingConfigurationRequestPrivate(const GetVoiceConnectorLoggingConfigurationRequestPrivate &other,
                                   GetVoiceConnectorLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorLoggingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
