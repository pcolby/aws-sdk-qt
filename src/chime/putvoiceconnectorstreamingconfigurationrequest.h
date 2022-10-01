// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorStreamingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorStreamingConfigurationRequest : public ChimeRequest {

public:
    PutVoiceConnectorStreamingConfigurationRequest(const PutVoiceConnectorStreamingConfigurationRequest &other);
    PutVoiceConnectorStreamingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorStreamingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
