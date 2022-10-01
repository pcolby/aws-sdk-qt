// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORORIGINATIONRESPONSE_H
#define QTAWS_DELETEVOICECONNECTORORIGINATIONRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectororiginationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorOriginationResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorOriginationResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorOriginationResponse(const DeleteVoiceConnectorOriginationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorOriginationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorOriginationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorOriginationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
