// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECELLREQUEST_H
#define QTAWS_DELETECELLREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteCellRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteCellRequest : public Route53RecoveryReadinessRequest {

public:
    DeleteCellRequest(const DeleteCellRequest &other);
    DeleteCellRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCellRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
