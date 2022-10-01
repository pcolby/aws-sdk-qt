// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORRESPONSE_H
#define QTAWS_DELETEVOICECONNECTORRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorResponse(const DeleteVoiceConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
