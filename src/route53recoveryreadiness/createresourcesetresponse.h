// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESETRESPONSE_H
#define QTAWS_CREATERESOURCESETRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "createresourcesetrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateResourceSetResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateResourceSetResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    CreateResourceSetResponse(const CreateResourceSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceSetResponse)
    Q_DISABLE_COPY(CreateResourceSetResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
