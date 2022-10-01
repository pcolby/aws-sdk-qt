// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELLRESPONSE_H
#define QTAWS_GETCELLRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "getcellrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetCellResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    GetCellResponse(const GetCellRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCellRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCellResponse)
    Q_DISABLE_COPY(GetCellResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
