// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCESRESPONSE_H
#define QTAWS_LISTTAGSFORRESOURCESRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "listtagsforresourcesrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListTagsForResourcesResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListTagsForResourcesResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    ListTagsForResourcesResponse(const ListTagsForResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourcesResponse)
    Q_DISABLE_COPY(ListTagsForResourcesResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
