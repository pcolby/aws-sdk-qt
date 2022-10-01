// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONCHANNELREQUEST_H
#define QTAWS_DELETENOTIFICATIONCHANNELREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class DeleteNotificationChannelRequestPrivate;

class QTAWSFMS_EXPORT DeleteNotificationChannelRequest : public FmsRequest {

public:
    DeleteNotificationChannelRequest(const DeleteNotificationChannelRequest &other);
    DeleteNotificationChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationChannelRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
