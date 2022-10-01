// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTEXTMESSAGESPENDLIMITOVERRIDEREQUEST_H
#define QTAWS_SETTEXTMESSAGESPENDLIMITOVERRIDEREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetTextMessageSpendLimitOverrideRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SetTextMessageSpendLimitOverrideRequest : public PinpointSmsVoiceV2Request {

public:
    SetTextMessageSpendLimitOverrideRequest(const SetTextMessageSpendLimitOverrideRequest &other);
    SetTextMessageSpendLimitOverrideRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTextMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
