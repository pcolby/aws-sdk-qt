// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVOICEMESSAGESPENDLIMITOVERRIDEREQUEST_H
#define QTAWS_SETVOICEMESSAGESPENDLIMITOVERRIDEREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetVoiceMessageSpendLimitOverrideRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SetVoiceMessageSpendLimitOverrideRequest : public PinpointSmsVoiceV2Request {

public:
    SetVoiceMessageSpendLimitOverrideRequest(const SetVoiceMessageSpendLimitOverrideRequest &other);
    SetVoiceMessageSpendLimitOverrideRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetVoiceMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
