// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTNOTIFICATIONCHANNELREQUEST_H
#define QTAWS_PUTNOTIFICATIONCHANNELREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class PutNotificationChannelRequestPrivate;

class QTAWSFMS_EXPORT PutNotificationChannelRequest : public FmsRequest {

public:
    PutNotificationChannelRequest(const PutNotificationChannelRequest &other);
    PutNotificationChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutNotificationChannelRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
