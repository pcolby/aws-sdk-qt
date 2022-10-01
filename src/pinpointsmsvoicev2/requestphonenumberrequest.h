// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTPHONENUMBERREQUEST_H
#define QTAWS_REQUESTPHONENUMBERREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class RequestPhoneNumberRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT RequestPhoneNumberRequest : public PinpointSmsVoiceV2Request {

public:
    RequestPhoneNumberRequest(const RequestPhoneNumberRequest &other);
    RequestPhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestPhoneNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
