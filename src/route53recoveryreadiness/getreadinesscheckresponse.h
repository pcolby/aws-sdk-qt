// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKRESPONSE_H
#define QTAWS_GETREADINESSCHECKRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "getreadinesscheckrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetReadinessCheckResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    GetReadinessCheckResponse(const GetReadinessCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReadinessCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReadinessCheckResponse)
    Q_DISABLE_COPY(GetReadinessCheckResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
