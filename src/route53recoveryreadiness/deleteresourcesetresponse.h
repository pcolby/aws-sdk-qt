// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESETRESPONSE_H
#define QTAWS_DELETERESOURCESETRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "deleteresourcesetrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteResourceSetResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteResourceSetResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    DeleteResourceSetResponse(const DeleteResourceSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourceSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceSetResponse)
    Q_DISABLE_COPY(DeleteResourceSetResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
