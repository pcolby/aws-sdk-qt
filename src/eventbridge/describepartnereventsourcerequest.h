// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNEREVENTSOURCEREQUEST_H
#define QTAWS_DESCRIBEPARTNEREVENTSOURCEREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribePartnerEventSourceRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribePartnerEventSourceRequest : public EventBridgeRequest {

public:
    DescribePartnerEventSourceRequest(const DescribePartnerEventSourceRequest &other);
    DescribePartnerEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePartnerEventSourceRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
