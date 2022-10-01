// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEOUTBOUNDCALLERCONFIGREQUEST_H
#define QTAWS_UPDATEQUEUEOUTBOUNDCALLERCONFIGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueOutboundCallerConfigRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateQueueOutboundCallerConfigRequest : public ConnectRequest {

public:
    UpdateQueueOutboundCallerConfigRequest(const UpdateQueueOutboundCallerConfigRequest &other);
    UpdateQueueOutboundCallerConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueOutboundCallerConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
