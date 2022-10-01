// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELLREQUEST_H
#define QTAWS_GETCELLREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetCellRequest : public Route53RecoveryReadinessRequest {

public:
    GetCellRequest(const GetCellRequest &other);
    GetCellRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCellRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
