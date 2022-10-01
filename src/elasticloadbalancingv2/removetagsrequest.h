// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSREQUEST_H
#define QTAWS_REMOVETAGSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RemoveTagsRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT RemoveTagsRequest : public ElasticLoadBalancingv2Request {

public:
    RemoveTagsRequest(const RemoveTagsRequest &other);
    RemoveTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
