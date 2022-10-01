// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCROSSACCOUNTAUTHORIZATIONSREQUEST_P_H
#define QTAWS_LISTCROSSACCOUNTAUTHORIZATIONSREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "listcrossaccountauthorizationsrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListCrossAccountAuthorizationsRequest;

class ListCrossAccountAuthorizationsRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    ListCrossAccountAuthorizationsRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   ListCrossAccountAuthorizationsRequest * const q);
    ListCrossAccountAuthorizationsRequestPrivate(const ListCrossAccountAuthorizationsRequestPrivate &other,
                                   ListCrossAccountAuthorizationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCrossAccountAuthorizationsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
