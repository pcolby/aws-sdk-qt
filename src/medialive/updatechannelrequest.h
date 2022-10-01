// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREQUEST_H
#define QTAWS_UPDATECHANNELREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateChannelRequestPrivate;

class QTAWSMEDIALIVE_EXPORT UpdateChannelRequest : public MediaLiveRequest {

public:
    UpdateChannelRequest(const UpdateChannelRequest &other);
    UpdateChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
