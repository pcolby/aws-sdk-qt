// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectorstreamingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorStreamingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorStreamingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorStreamingConfigurationResponse(const GetVoiceConnectorStreamingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorStreamingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorStreamingConfigurationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorStreamingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
