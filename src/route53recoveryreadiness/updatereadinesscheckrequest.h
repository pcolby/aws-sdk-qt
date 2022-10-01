// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREADINESSCHECKREQUEST_H
#define QTAWS_UPDATEREADINESSCHECKREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateReadinessCheckRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT UpdateReadinessCheckRequest : public Route53RecoveryReadinessRequest {

public:
    UpdateReadinessCheckRequest(const UpdateReadinessCheckRequest &other);
    UpdateReadinessCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReadinessCheckRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
