// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSVOIPCHANNELREQUEST_H
#define QTAWS_DELETEAPNSVOIPCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsVoipChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteApnsVoipChannelRequest : public PinpointRequest {

public:
    DeleteApnsVoipChannelRequest(const DeleteApnsVoipChannelRequest &other);
    DeleteApnsVoipChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApnsVoipChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
