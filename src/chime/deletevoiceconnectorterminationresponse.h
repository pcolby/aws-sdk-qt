// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORTERMINATIONRESPONSE_H
#define QTAWS_DELETEVOICECONNECTORTERMINATIONRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectorterminationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorTerminationResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorTerminationResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorTerminationResponse(const DeleteVoiceConnectorTerminationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorTerminationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorTerminationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorTerminationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
