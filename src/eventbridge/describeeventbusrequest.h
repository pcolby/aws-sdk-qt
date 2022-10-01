// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTBUSREQUEST_H
#define QTAWS_DESCRIBEEVENTBUSREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeEventBusRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeEventBusRequest : public EventBridgeRequest {

public:
    DescribeEventBusRequest(const DescribeEventBusRequest &other);
    DescribeEventBusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventBusRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
