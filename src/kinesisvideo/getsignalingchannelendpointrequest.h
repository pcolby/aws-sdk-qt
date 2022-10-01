// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNALINGCHANNELENDPOINTREQUEST_H
#define QTAWS_GETSIGNALINGCHANNELENDPOINTREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class GetSignalingChannelEndpointRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT GetSignalingChannelEndpointRequest : public KinesisVideoRequest {

public:
    GetSignalingChannelEndpointRequest(const GetSignalingChannelEndpointRequest &other);
    GetSignalingChannelEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSignalingChannelEndpointRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
