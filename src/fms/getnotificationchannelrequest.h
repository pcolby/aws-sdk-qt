// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNOTIFICATIONCHANNELREQUEST_H
#define QTAWS_GETNOTIFICATIONCHANNELREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class GetNotificationChannelRequestPrivate;

class QTAWSFMS_EXPORT GetNotificationChannelRequest : public FmsRequest {

public:
    GetNotificationChannelRequest(const GetNotificationChannelRequest &other);
    GetNotificationChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNotificationChannelRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
