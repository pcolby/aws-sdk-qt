// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICEMESSAGESPENDLIMITOVERRIDEREQUEST_H
#define QTAWS_DELETEVOICEMESSAGESPENDLIMITOVERRIDEREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteVoiceMessageSpendLimitOverrideRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteVoiceMessageSpendLimitOverrideRequest : public PinpointSmsVoiceV2Request {

public:
    DeleteVoiceMessageSpendLimitOverrideRequest(const DeleteVoiceMessageSpendLimitOverrideRequest &other);
    DeleteVoiceMessageSpendLimitOverrideRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
