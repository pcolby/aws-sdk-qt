// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECONNECTORGROUPRESPONSE_H
#define QTAWS_UPDATEVOICECONNECTORGROUPRESPONSE_H

#include "chimeresponse.h"
#include "updatevoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class UpdateVoiceConnectorGroupResponsePrivate;

class QTAWSCHIME_EXPORT UpdateVoiceConnectorGroupResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateVoiceConnectorGroupResponse(const UpdateVoiceConnectorGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVoiceConnectorGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(UpdateVoiceConnectorGroupResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
