// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBAIDUCHANNELREQUEST_H
#define QTAWS_UPDATEBAIDUCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateBaiduChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateBaiduChannelRequest : public PinpointRequest {

public:
    UpdateBaiduChannelRequest(const UpdateBaiduChannelRequest &other);
    UpdateBaiduChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBaiduChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
