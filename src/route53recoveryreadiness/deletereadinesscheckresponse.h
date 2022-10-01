// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREADINESSCHECKRESPONSE_H
#define QTAWS_DELETEREADINESSCHECKRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "deletereadinesscheckrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteReadinessCheckResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteReadinessCheckResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    DeleteReadinessCheckResponse(const DeleteReadinessCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReadinessCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReadinessCheckResponse)
    Q_DISABLE_COPY(DeleteReadinessCheckResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
