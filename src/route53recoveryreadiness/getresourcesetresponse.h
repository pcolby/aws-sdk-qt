// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESETRESPONSE_H
#define QTAWS_GETRESOURCESETRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "getresourcesetrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetResourceSetResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetResourceSetResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    GetResourceSetResponse(const GetResourceSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceSetResponse)
    Q_DISABLE_COPY(GetResourceSetResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
