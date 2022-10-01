// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORPROXYRESPONSE_H
#define QTAWS_GETVOICECONNECTORPROXYRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectorproxyrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorProxyResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorProxyResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorProxyResponse(const GetVoiceConnectorProxyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorProxyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorProxyResponse)
    Q_DISABLE_COPY(GetVoiceConnectorProxyResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
