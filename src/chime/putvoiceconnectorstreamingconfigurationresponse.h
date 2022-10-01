// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "putvoiceconnectorstreamingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorStreamingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorStreamingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutVoiceConnectorStreamingConfigurationResponse(const PutVoiceConnectorStreamingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutVoiceConnectorStreamingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorStreamingConfigurationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorStreamingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
