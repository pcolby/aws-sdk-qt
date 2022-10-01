// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORLOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_GETVOICECONNECTORLOGGINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorLoggingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorLoggingConfigurationRequest : public ChimeRequest {

public:
    GetVoiceConnectorLoggingConfigurationRequest(const GetVoiceConnectorLoggingConfigurationRequest &other);
    GetVoiceConnectorLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorLoggingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
