// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORPROXYRESPONSE_H
#define QTAWS_DELETEVOICECONNECTORPROXYRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectorproxyrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorProxyResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorProxyResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorProxyResponse(const DeleteVoiceConnectorProxyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorProxyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorProxyResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorProxyResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
