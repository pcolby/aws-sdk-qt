// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETEVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorStreamingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorStreamingConfigurationRequest : public ChimeRequest {

public:
    DeleteVoiceConnectorStreamingConfigurationRequest(const DeleteVoiceConnectorStreamingConfigurationRequest &other);
    DeleteVoiceConnectorStreamingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorStreamingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
