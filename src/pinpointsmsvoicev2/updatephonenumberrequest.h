// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERREQUEST_H
#define QTAWS_UPDATEPHONENUMBERREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdatePhoneNumberRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT UpdatePhoneNumberRequest : public PinpointSmsVoiceV2Request {

public:
    UpdatePhoneNumberRequest(const UpdatePhoneNumberRequest &other);
    UpdatePhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePhoneNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
