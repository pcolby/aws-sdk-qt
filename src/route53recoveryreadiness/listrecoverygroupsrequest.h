// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYGROUPSREQUEST_H
#define QTAWS_LISTRECOVERYGROUPSREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListRecoveryGroupsRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListRecoveryGroupsRequest : public Route53RecoveryReadinessRequest {

public:
    ListRecoveryGroupsRequest(const ListRecoveryGroupsRequest &other);
    ListRecoveryGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecoveryGroupsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
