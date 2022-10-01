// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIGNALINGCHANNELREQUEST_H
#define QTAWS_DESCRIBESIGNALINGCHANNELREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeSignalingChannelRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT DescribeSignalingChannelRequest : public KinesisVideoRequest {

public:
    DescribeSignalingChannelRequest(const DescribeSignalingChannelRequest &other);
    DescribeSignalingChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSignalingChannelRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
