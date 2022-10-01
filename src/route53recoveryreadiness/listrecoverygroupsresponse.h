// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYGROUPSRESPONSE_H
#define QTAWS_LISTRECOVERYGROUPSRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "listrecoverygroupsrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListRecoveryGroupsResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListRecoveryGroupsResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    ListRecoveryGroupsResponse(const ListRecoveryGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecoveryGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecoveryGroupsResponse)
    Q_DISABLE_COPY(ListRecoveryGroupsResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
