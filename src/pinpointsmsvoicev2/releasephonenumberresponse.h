// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEPHONENUMBERRESPONSE_H
#define QTAWS_RELEASEPHONENUMBERRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "releasephonenumberrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class ReleasePhoneNumberResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT ReleasePhoneNumberResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    ReleasePhoneNumberResponse(const ReleasePhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReleasePhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleasePhoneNumberResponse)
    Q_DISABLE_COPY(ReleasePhoneNumberResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
