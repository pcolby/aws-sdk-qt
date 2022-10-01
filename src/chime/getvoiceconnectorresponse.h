// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORRESPONSE_H
#define QTAWS_GETVOICECONNECTORRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorResponse(const GetVoiceConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorResponse)
    Q_DISABLE_COPY(GetVoiceConnectorResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
