// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTPHONENUMBERRESPONSE_H
#define QTAWS_REQUESTPHONENUMBERRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "requestphonenumberrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class RequestPhoneNumberResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT RequestPhoneNumberResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    RequestPhoneNumberResponse(const RequestPhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestPhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestPhoneNumberResponse)
    Q_DISABLE_COPY(RequestPhoneNumberResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
