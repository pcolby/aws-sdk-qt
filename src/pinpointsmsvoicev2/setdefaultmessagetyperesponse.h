// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTMESSAGETYPERESPONSE_H
#define QTAWS_SETDEFAULTMESSAGETYPERESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "setdefaultmessagetyperequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetDefaultMessageTypeResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SetDefaultMessageTypeResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    SetDefaultMessageTypeResponse(const SetDefaultMessageTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetDefaultMessageTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultMessageTypeResponse)
    Q_DISABLE_COPY(SetDefaultMessageTypeResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
