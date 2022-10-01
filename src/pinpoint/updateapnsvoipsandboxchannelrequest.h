// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSVOIPSANDBOXCHANNELREQUEST_H
#define QTAWS_UPDATEAPNSVOIPSANDBOXCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsVoipSandboxChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateApnsVoipSandboxChannelRequest : public PinpointRequest {

public:
    UpdateApnsVoipSandboxChannelRequest(const UpdateApnsVoipSandboxChannelRequest &other);
    UpdateApnsVoipSandboxChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApnsVoipSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
