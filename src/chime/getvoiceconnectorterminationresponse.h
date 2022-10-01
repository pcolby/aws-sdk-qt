// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORTERMINATIONRESPONSE_H
#define QTAWS_GETVOICECONNECTORTERMINATIONRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectorterminationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorTerminationResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorTerminationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorTerminationResponse(const GetVoiceConnectorTerminationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorTerminationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorTerminationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorTerminationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
