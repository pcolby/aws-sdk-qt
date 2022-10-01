// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADMCHANNELREQUEST_H
#define QTAWS_DELETEADMCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteAdmChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteAdmChannelRequest : public PinpointRequest {

public:
    DeleteAdmChannelRequest(const DeleteAdmChannelRequest &other);
    DeleteAdmChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAdmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
