// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREADINESSCHECKREQUEST_H
#define QTAWS_DELETEREADINESSCHECKREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteReadinessCheckRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteReadinessCheckRequest : public Route53RecoveryReadinessRequest {

public:
    DeleteReadinessCheckRequest(const DeleteReadinessCheckRequest &other);
    DeleteReadinessCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReadinessCheckRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
