// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCESREQUEST_H
#define QTAWS_LISTTAGSFORRESOURCESREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListTagsForResourcesRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListTagsForResourcesRequest : public Route53RecoveryReadinessRequest {

public:
    ListTagsForResourcesRequest(const ListTagsForResourcesRequest &other);
    ListTagsForResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourcesRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
