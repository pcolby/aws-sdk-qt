// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORTERMINATIONHEALTHRESPONSE_H
#define QTAWS_GETVOICECONNECTORTERMINATIONHEALTHRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectorterminationhealthrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorTerminationHealthResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorTerminationHealthResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorTerminationHealthResponse(const GetVoiceConnectorTerminationHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorTerminationHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorTerminationHealthResponse)
    Q_DISABLE_COPY(GetVoiceConnectorTerminationHealthResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
