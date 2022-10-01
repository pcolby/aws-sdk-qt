// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSCHANNELREQUEST_H
#define QTAWS_GETAPNSCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT GetApnsChannelRequest : public PinpointRequest {

public:
    GetApnsChannelRequest(const GetApnsChannelRequest &other);
    GetApnsChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApnsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
