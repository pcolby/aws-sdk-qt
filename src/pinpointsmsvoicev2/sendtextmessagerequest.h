// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTEXTMESSAGEREQUEST_H
#define QTAWS_SENDTEXTMESSAGEREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SendTextMessageRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SendTextMessageRequest : public PinpointSmsVoiceV2Request {

public:
    SendTextMessageRequest(const SendTextMessageRequest &other);
    SendTextMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTextMessageRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
