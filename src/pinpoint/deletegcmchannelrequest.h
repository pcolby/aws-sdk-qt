// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGCMCHANNELREQUEST_H
#define QTAWS_DELETEGCMCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteGcmChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteGcmChannelRequest : public PinpointRequest {

public:
    DeleteGcmChannelRequest(const DeleteGcmChannelRequest &other);
    DeleteGcmChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGcmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
