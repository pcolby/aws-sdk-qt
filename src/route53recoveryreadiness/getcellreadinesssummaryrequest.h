// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELLREADINESSSUMMARYREQUEST_H
#define QTAWS_GETCELLREADINESSSUMMARYREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellReadinessSummaryRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetCellReadinessSummaryRequest : public Route53RecoveryReadinessRequest {

public:
    GetCellReadinessSummaryRequest(const GetCellReadinessSummaryRequest &other);
    GetCellReadinessSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCellReadinessSummaryRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
