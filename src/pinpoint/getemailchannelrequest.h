// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILCHANNELREQUEST_H
#define QTAWS_GETEMAILCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEmailChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT GetEmailChannelRequest : public PinpointRequest {

public:
    GetEmailChannelRequest(const GetEmailChannelRequest &other);
    GetEmailChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
