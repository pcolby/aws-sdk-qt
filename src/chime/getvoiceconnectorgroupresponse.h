// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORGROUPRESPONSE_H
#define QTAWS_GETVOICECONNECTORGROUPRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorGroupResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorGroupResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorGroupResponse(const GetVoiceConnectorGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(GetVoiceConnectorGroupResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
