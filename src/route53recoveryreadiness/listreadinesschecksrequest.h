// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREADINESSCHECKSREQUEST_H
#define QTAWS_LISTREADINESSCHECKSREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListReadinessChecksRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListReadinessChecksRequest : public Route53RecoveryReadinessRequest {

public:
    ListReadinessChecksRequest(const ListReadinessChecksRequest &other);
    ListReadinessChecksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReadinessChecksRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
