// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOPTEDOUTNUMBERRESPONSE_H
#define QTAWS_PUTOPTEDOUTNUMBERRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "putoptedoutnumberrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PutOptedOutNumberResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT PutOptedOutNumberResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    PutOptedOutNumberResponse(const PutOptedOutNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutOptedOutNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutOptedOutNumberResponse)
    Q_DISABLE_COPY(PutOptedOutNumberResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
