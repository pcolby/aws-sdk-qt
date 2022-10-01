// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORPROXYRESPONSE_H
#define QTAWS_PUTVOICECONNECTORPROXYRESPONSE_H

#include "chimeresponse.h"
#include "putvoiceconnectorproxyrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorProxyResponsePrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorProxyResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutVoiceConnectorProxyResponse(const PutVoiceConnectorProxyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutVoiceConnectorProxyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorProxyResponse)
    Q_DISABLE_COPY(PutVoiceConnectorProxyResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
