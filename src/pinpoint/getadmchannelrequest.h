// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMCHANNELREQUEST_H
#define QTAWS_GETADMCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetAdmChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT GetAdmChannelRequest : public PinpointRequest {

public:
    GetAdmChannelRequest(const GetAdmChannelRequest &other);
    GetAdmChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAdmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
