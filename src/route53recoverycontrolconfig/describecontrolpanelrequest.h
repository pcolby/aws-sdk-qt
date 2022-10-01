// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTROLPANELREQUEST_H
#define QTAWS_DESCRIBECONTROLPANELREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeControlPanelRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DescribeControlPanelRequest : public Route53RecoveryControlConfigRequest {

public:
    DescribeControlPanelRequest(const DescribeControlPanelRequest &other);
    DescribeControlPanelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeControlPanelRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
