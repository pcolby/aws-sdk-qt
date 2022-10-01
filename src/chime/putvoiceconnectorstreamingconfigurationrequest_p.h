// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "putvoiceconnectorstreamingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorStreamingConfigurationRequest;

class PutVoiceConnectorStreamingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    PutVoiceConnectorStreamingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   PutVoiceConnectorStreamingConfigurationRequest * const q);
    PutVoiceConnectorStreamingConfigurationRequestPrivate(const PutVoiceConnectorStreamingConfigurationRequestPrivate &other,
                                   PutVoiceConnectorStreamingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorStreamingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
