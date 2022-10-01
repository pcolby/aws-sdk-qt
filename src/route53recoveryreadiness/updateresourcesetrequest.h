// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESETREQUEST_H
#define QTAWS_UPDATERESOURCESETREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateResourceSetRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT UpdateResourceSetRequest : public Route53RecoveryReadinessRequest {

public:
    UpdateResourceSetRequest(const UpdateResourceSetRequest &other);
    UpdateResourceSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceSetRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
