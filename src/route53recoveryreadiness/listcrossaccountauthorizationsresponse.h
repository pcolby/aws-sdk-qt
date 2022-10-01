// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCROSSACCOUNTAUTHORIZATIONSRESPONSE_H
#define QTAWS_LISTCROSSACCOUNTAUTHORIZATIONSRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "listcrossaccountauthorizationsrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListCrossAccountAuthorizationsResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListCrossAccountAuthorizationsResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    ListCrossAccountAuthorizationsResponse(const ListCrossAccountAuthorizationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCrossAccountAuthorizationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCrossAccountAuthorizationsResponse)
    Q_DISABLE_COPY(ListCrossAccountAuthorizationsResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
