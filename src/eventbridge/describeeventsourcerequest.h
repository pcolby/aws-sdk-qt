// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCEREQUEST_H
#define QTAWS_DESCRIBEEVENTSOURCEREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeEventSourceRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeEventSourceRequest : public EventBridgeRequest {

public:
    DescribeEventSourceRequest(const DescribeEventSourceRequest &other);
    DescribeEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventSourceRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
