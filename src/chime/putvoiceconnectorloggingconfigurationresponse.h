// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORLOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTVOICECONNECTORLOGGINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "putvoiceconnectorloggingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorLoggingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorLoggingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutVoiceConnectorLoggingConfigurationResponse(const PutVoiceConnectorLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutVoiceConnectorLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorLoggingConfigurationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorLoggingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
