// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEPHONENUMBERREQUEST_H
#define QTAWS_RELEASEPHONENUMBERREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class ReleasePhoneNumberRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT ReleasePhoneNumberRequest : public PinpointSmsVoiceV2Request {

public:
    ReleasePhoneNumberRequest(const ReleasePhoneNumberRequest &other);
    ReleasePhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleasePhoneNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
