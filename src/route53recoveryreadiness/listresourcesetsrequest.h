// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESETSREQUEST_H
#define QTAWS_LISTRESOURCESETSREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListResourceSetsRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListResourceSetsRequest : public Route53RecoveryReadinessRequest {

public:
    ListResourceSetsRequest(const ListResourceSetsRequest &other);
    ListResourceSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceSetsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
