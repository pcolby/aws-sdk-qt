// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECHANNELREQUEST_H
#define QTAWS_GETVOICECHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetVoiceChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT GetVoiceChannelRequest : public PinpointRequest {

public:
    GetVoiceChannelRequest(const GetVoiceChannelRequest &other);
    GetVoiceChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
