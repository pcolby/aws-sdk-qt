// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESRESPONSE_H
#define QTAWS_LISTRULESRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "listrulesrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListRulesResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListRulesResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    ListRulesResponse(const ListRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRulesResponse)
    Q_DISABLE_COPY(ListRulesResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
