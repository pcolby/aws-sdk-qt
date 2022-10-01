// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSSANDBOXCHANNELREQUEST_H
#define QTAWS_GETAPNSSANDBOXCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsSandboxChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT GetApnsSandboxChannelRequest : public PinpointRequest {

public:
    GetApnsSandboxChannelRequest(const GetApnsSandboxChannelRequest &other);
    GetApnsSandboxChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApnsSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
