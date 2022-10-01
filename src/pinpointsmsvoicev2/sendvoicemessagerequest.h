// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDVOICEMESSAGEREQUEST_H
#define QTAWS_SENDVOICEMESSAGEREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SendVoiceMessageRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SendVoiceMessageRequest : public PinpointSmsVoiceV2Request {

public:
    SendVoiceMessageRequest(const SendVoiceMessageRequest &other);
    SendVoiceMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendVoiceMessageRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
