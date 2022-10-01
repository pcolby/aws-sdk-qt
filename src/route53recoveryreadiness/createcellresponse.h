// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECELLRESPONSE_H
#define QTAWS_CREATECELLRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "createcellrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateCellResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateCellResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    CreateCellResponse(const CreateCellRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCellRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCellResponse)
    Q_DISABLE_COPY(CreateCellResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
