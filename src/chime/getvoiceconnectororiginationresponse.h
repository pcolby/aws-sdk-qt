// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORORIGINATIONRESPONSE_H
#define QTAWS_GETVOICECONNECTORORIGINATIONRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectororiginationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorOriginationResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorOriginationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorOriginationResponse(const GetVoiceConnectorOriginationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorOriginationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorOriginationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorOriginationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
