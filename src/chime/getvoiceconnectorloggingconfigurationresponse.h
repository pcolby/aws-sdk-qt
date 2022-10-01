// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORLOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETVOICECONNECTORLOGGINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectorloggingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorLoggingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorLoggingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorLoggingConfigurationResponse(const GetVoiceConnectorLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorLoggingConfigurationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorLoggingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
