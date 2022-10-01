// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORTERMINATIONRESPONSE_H
#define QTAWS_PUTVOICECONNECTORTERMINATIONRESPONSE_H

#include "chimeresponse.h"
#include "putvoiceconnectorterminationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorTerminationResponsePrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorTerminationResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutVoiceConnectorTerminationResponse(const PutVoiceConnectorTerminationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutVoiceConnectorTerminationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorTerminationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorTerminationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
