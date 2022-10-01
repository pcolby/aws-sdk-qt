// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCROSSACCOUNTAUTHORIZATIONSREQUEST_H
#define QTAWS_LISTCROSSACCOUNTAUTHORIZATIONSREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListCrossAccountAuthorizationsRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListCrossAccountAuthorizationsRequest : public Route53RecoveryReadinessRequest {

public:
    ListCrossAccountAuthorizationsRequest(const ListCrossAccountAuthorizationsRequest &other);
    ListCrossAccountAuthorizationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCrossAccountAuthorizationsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
