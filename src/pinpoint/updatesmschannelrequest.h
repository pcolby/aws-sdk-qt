// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMSCHANNELREQUEST_H
#define QTAWS_UPDATESMSCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSmsChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateSmsChannelRequest : public PinpointRequest {

public:
    UpdateSmsChannelRequest(const UpdateSmsChannelRequest &other);
    UpdateSmsChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSmsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
