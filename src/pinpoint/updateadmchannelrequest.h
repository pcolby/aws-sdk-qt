// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADMCHANNELREQUEST_H
#define QTAWS_UPDATEADMCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateAdmChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateAdmChannelRequest : public PinpointRequest {

public:
    UpdateAdmChannelRequest(const UpdateAdmChannelRequest &other);
    UpdateAdmChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAdmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
