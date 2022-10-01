// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDROUTE53HEALTHCHECKSRESPONSE_H
#define QTAWS_LISTASSOCIATEDROUTE53HEALTHCHECKSRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "listassociatedroute53healthchecksrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListAssociatedRoute53HealthChecksResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT ListAssociatedRoute53HealthChecksResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    ListAssociatedRoute53HealthChecksResponse(const ListAssociatedRoute53HealthChecksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociatedRoute53HealthChecksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedRoute53HealthChecksResponse)
    Q_DISABLE_COPY(ListAssociatedRoute53HealthChecksResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
