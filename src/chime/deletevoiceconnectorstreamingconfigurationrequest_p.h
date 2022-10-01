// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "deletevoiceconnectorstreamingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorStreamingConfigurationRequest;

class DeleteVoiceConnectorStreamingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteVoiceConnectorStreamingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   DeleteVoiceConnectorStreamingConfigurationRequest * const q);
    DeleteVoiceConnectorStreamingConfigurationRequestPrivate(const DeleteVoiceConnectorStreamingConfigurationRequestPrivate &other,
                                   DeleteVoiceConnectorStreamingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorStreamingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
