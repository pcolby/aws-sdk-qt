// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORORIGINATIONRESPONSE_H
#define QTAWS_PUTVOICECONNECTORORIGINATIONRESPONSE_H

#include "chimeresponse.h"
#include "putvoiceconnectororiginationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorOriginationResponsePrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorOriginationResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutVoiceConnectorOriginationResponse(const PutVoiceConnectorOriginationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutVoiceConnectorOriginationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorOriginationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorOriginationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
