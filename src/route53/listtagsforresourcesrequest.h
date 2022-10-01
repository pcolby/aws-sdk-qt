// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCESREQUEST_H
#define QTAWS_LISTTAGSFORRESOURCESREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListTagsForResourcesRequestPrivate;

class QTAWSROUTE53_EXPORT ListTagsForResourcesRequest : public Route53Request {

public:
    ListTagsForResourcesRequest(const ListTagsForResourcesRequest &other);
    ListTagsForResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourcesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
