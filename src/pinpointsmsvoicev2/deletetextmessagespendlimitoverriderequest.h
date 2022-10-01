// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDEREQUEST_H
#define QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDEREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteTextMessageSpendLimitOverrideRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteTextMessageSpendLimitOverrideRequest : public PinpointSmsVoiceV2Request {

public:
    DeleteTextMessageSpendLimitOverrideRequest(const DeleteTextMessageSpendLimitOverrideRequest &other);
    DeleteTextMessageSpendLimitOverrideRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTextMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
