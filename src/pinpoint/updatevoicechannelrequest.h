// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECHANNELREQUEST_H
#define QTAWS_UPDATEVOICECHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateVoiceChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateVoiceChannelRequest : public PinpointRequest {

public:
    UpdateVoiceChannelRequest(const UpdateVoiceChannelRequest &other);
    UpdateVoiceChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVoiceChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
