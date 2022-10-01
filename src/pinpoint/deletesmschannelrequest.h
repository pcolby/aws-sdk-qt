// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSCHANNELREQUEST_H
#define QTAWS_DELETESMSCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSmsChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteSmsChannelRequest : public PinpointRequest {

public:
    DeleteSmsChannelRequest(const DeleteSmsChannelRequest &other);
    DeleteSmsChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSmsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
