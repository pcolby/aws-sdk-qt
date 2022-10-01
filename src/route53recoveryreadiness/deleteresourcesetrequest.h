// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESETREQUEST_H
#define QTAWS_DELETERESOURCESETREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteResourceSetRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteResourceSetRequest : public Route53RecoveryReadinessRequest {

public:
    DeleteResourceSetRequest(const DeleteResourceSetRequest &other);
    DeleteResourceSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceSetRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
