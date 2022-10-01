// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEREQUEST_H
#define QTAWS_DESCRIBERULEREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeRuleRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeRuleRequest : public EventBridgeRequest {

public:
    DescribeRuleRequest(const DescribeRuleRequest &other);
    DescribeRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuleRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
