// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREADINESSCHECKSRESPONSE_H
#define QTAWS_LISTREADINESSCHECKSRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "listreadinesschecksrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListReadinessChecksResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListReadinessChecksResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    ListReadinessChecksResponse(const ListReadinessChecksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReadinessChecksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReadinessChecksResponse)
    Q_DISABLE_COPY(ListReadinessChecksResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
