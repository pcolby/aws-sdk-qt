// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECHANNELREQUEST_H
#define QTAWS_DELETEVOICECHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteVoiceChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteVoiceChannelRequest : public PinpointRequest {

public:
    DeleteVoiceChannelRequest(const DeleteVoiceChannelRequest &other);
    DeleteVoiceChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
