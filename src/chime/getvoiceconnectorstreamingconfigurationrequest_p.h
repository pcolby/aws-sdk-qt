// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectorstreamingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorStreamingConfigurationRequest;

class GetVoiceConnectorStreamingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorStreamingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorStreamingConfigurationRequest * const q);
    GetVoiceConnectorStreamingConfigurationRequestPrivate(const GetVoiceConnectorStreamingConfigurationRequestPrivate &other,
                                   GetVoiceConnectorStreamingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorStreamingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
