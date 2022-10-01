// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILCHANNELREQUEST_H
#define QTAWS_UPDATEEMAILCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEmailChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateEmailChannelRequest : public PinpointRequest {

public:
    UpdateEmailChannelRequest(const UpdateEmailChannelRequest &other);
    UpdateEmailChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEmailChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
