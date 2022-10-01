// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDROUTE53HEALTHCHECKSREQUEST_H
#define QTAWS_LISTASSOCIATEDROUTE53HEALTHCHECKSREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListAssociatedRoute53HealthChecksRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT ListAssociatedRoute53HealthChecksRequest : public Route53RecoveryControlConfigRequest {

public:
    ListAssociatedRoute53HealthChecksRequest(const ListAssociatedRoute53HealthChecksRequest &other);
    ListAssociatedRoute53HealthChecksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedRoute53HealthChecksRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
