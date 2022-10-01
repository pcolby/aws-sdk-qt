// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSCHANNELREQUEST_H
#define QTAWS_UPDATEAPNSCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateApnsChannelRequest : public PinpointRequest {

public:
    UpdateApnsChannelRequest(const UpdateApnsChannelRequest &other);
    UpdateApnsChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApnsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
