// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREADINESSCHECKRESPONSE_H
#define QTAWS_UPDATEREADINESSCHECKRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "updatereadinesscheckrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateReadinessCheckResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT UpdateReadinessCheckResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    UpdateReadinessCheckResponse(const UpdateReadinessCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReadinessCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReadinessCheckResponse)
    Q_DISABLE_COPY(UpdateReadinessCheckResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
