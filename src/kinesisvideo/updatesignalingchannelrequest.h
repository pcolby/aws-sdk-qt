// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIGNALINGCHANNELREQUEST_H
#define QTAWS_UPDATESIGNALINGCHANNELREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateSignalingChannelRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT UpdateSignalingChannelRequest : public KinesisVideoRequest {

public:
    UpdateSignalingChannelRequest(const UpdateSignalingChannelRequest &other);
    UpdateSignalingChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSignalingChannelRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
