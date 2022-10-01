// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCHANNELREQUEST_H
#define QTAWS_STOPCHANNELREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class StopChannelRequestPrivate;

class QTAWSMEDIALIVE_EXPORT StopChannelRequest : public MediaLiveRequest {

public:
    StopChannelRequest(const StopChannelRequest &other);
    StopChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopChannelRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
