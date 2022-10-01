// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECELLRESPONSE_H
#define QTAWS_UPDATECELLRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "updatecellrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateCellResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT UpdateCellResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    UpdateCellResponse(const UpdateCellRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCellRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCellResponse)
    Q_DISABLE_COPY(UpdateCellResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
