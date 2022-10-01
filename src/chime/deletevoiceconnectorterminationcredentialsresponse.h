// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_H
#define QTAWS_DELETEVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectorterminationcredentialsrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorTerminationCredentialsResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorTerminationCredentialsResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorTerminationCredentialsResponse(const DeleteVoiceConnectorTerminationCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorTerminationCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorTerminationCredentialsResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorTerminationCredentialsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
