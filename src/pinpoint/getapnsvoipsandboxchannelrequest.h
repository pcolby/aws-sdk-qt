// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSVOIPSANDBOXCHANNELREQUEST_H
#define QTAWS_GETAPNSVOIPSANDBOXCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsVoipSandboxChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT GetApnsVoipSandboxChannelRequest : public PinpointRequest {

public:
    GetApnsVoipSandboxChannelRequest(const GetApnsVoipSandboxChannelRequest &other);
    GetApnsVoipSandboxChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApnsVoipSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
