// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_H
#define QTAWS_PUTVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_H

#include "chimeresponse.h"
#include "putvoiceconnectorterminationcredentialsrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorTerminationCredentialsResponsePrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorTerminationCredentialsResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutVoiceConnectorTerminationCredentialsResponse(const PutVoiceConnectorTerminationCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutVoiceConnectorTerminationCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorTerminationCredentialsResponse)
    Q_DISABLE_COPY(PutVoiceConnectorTerminationCredentialsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
