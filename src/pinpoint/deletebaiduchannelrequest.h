// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBAIDUCHANNELREQUEST_H
#define QTAWS_DELETEBAIDUCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteBaiduChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteBaiduChannelRequest : public PinpointRequest {

public:
    DeleteBaiduChannelRequest(const DeleteBaiduChannelRequest &other);
    DeleteBaiduChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBaiduChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
