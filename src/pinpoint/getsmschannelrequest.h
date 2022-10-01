// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSCHANNELREQUEST_H
#define QTAWS_GETSMSCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSmsChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT GetSmsChannelRequest : public PinpointRequest {

public:
    GetSmsChannelRequest(const GetSmsChannelRequest &other);
    GetSmsChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSmsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
