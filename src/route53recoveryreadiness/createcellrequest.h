// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECELLREQUEST_H
#define QTAWS_CREATECELLREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateCellRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateCellRequest : public Route53RecoveryReadinessRequest {

public:
    CreateCellRequest(const CreateCellRequest &other);
    CreateCellRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCellRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
