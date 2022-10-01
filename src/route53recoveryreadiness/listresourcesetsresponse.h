// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESETSRESPONSE_H
#define QTAWS_LISTRESOURCESETSRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "listresourcesetsrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListResourceSetsResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListResourceSetsResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    ListResourceSetsResponse(const ListResourceSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceSetsResponse)
    Q_DISABLE_COPY(ListResourceSetsResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
