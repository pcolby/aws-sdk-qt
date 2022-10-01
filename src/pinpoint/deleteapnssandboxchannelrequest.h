// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSSANDBOXCHANNELREQUEST_H
#define QTAWS_DELETEAPNSSANDBOXCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsSandboxChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteApnsSandboxChannelRequest : public PinpointRequest {

public:
    DeleteApnsSandboxChannelRequest(const DeleteApnsSandboxChannelRequest &other);
    DeleteApnsSandboxChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApnsSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
