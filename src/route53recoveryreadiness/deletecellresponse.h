// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECELLRESPONSE_H
#define QTAWS_DELETECELLRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "deletecellrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteCellResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteCellResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    DeleteCellResponse(const DeleteCellRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCellRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCellResponse)
    Q_DISABLE_COPY(DeleteCellResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
