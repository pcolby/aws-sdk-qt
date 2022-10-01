// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNALINGCHANNELSREQUEST_H
#define QTAWS_LISTSIGNALINGCHANNELSREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class ListSignalingChannelsRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT ListSignalingChannelsRequest : public KinesisVideoRequest {

public:
    ListSignalingChannelsRequest(const ListSignalingChannelsRequest &other);
    ListSignalingChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSignalingChannelsRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
