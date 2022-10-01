// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORGROUPRESPONSE_H
#define QTAWS_DELETEVOICECONNECTORGROUPRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorGroupResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorGroupResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorGroupResponse(const DeleteVoiceConnectorGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorGroupResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
