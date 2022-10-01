// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICECONNECTORGROUPRESPONSE_H
#define QTAWS_CREATEVOICECONNECTORGROUPRESPONSE_H

#include "chimeresponse.h"
#include "createvoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class CreateVoiceConnectorGroupResponsePrivate;

class QTAWSCHIME_EXPORT CreateVoiceConnectorGroupResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateVoiceConnectorGroupResponse(const CreateVoiceConnectorGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVoiceConnectorGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(CreateVoiceConnectorGroupResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
