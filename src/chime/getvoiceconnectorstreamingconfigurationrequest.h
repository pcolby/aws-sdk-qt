// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_H
#define QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorStreamingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorStreamingConfigurationRequest : public ChimeRequest {

public:
    GetVoiceConnectorStreamingConfigurationRequest(const GetVoiceConnectorStreamingConfigurationRequest &other);
    GetVoiceConnectorStreamingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorStreamingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
