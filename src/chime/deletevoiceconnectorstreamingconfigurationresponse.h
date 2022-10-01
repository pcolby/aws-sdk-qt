// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectorstreamingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorStreamingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorStreamingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorStreamingConfigurationResponse(const DeleteVoiceConnectorStreamingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorStreamingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorStreamingConfigurationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorStreamingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
