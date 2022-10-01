// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECELLREQUEST_H
#define QTAWS_UPDATECELLREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateCellRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT UpdateCellRequest : public Route53RecoveryReadinessRequest {

public:
    UpdateCellRequest(const UpdateCellRequest &other);
    UpdateCellRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCellRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
