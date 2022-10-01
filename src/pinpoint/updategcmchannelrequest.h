// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGCMCHANNELREQUEST_H
#define QTAWS_UPDATEGCMCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateGcmChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateGcmChannelRequest : public PinpointRequest {

public:
    UpdateGcmChannelRequest(const UpdateGcmChannelRequest &other);
    UpdateGcmChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGcmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
