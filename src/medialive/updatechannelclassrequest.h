// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELCLASSREQUEST_H
#define QTAWS_UPDATECHANNELCLASSREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateChannelClassRequestPrivate;

class QTAWSMEDIALIVE_EXPORT UpdateChannelClassRequest : public MediaLiveRequest {

public:
    UpdateChannelClassRequest(const UpdateChannelClassRequest &other);
    UpdateChannelClassRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelClassRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
