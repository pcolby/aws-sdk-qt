// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIGNALINGCHANNELREQUEST_H
#define QTAWS_DELETESIGNALINGCHANNELREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class DeleteSignalingChannelRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT DeleteSignalingChannelRequest : public KinesisVideoRequest {

public:
    DeleteSignalingChannelRequest(const DeleteSignalingChannelRequest &other);
    DeleteSignalingChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSignalingChannelRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
