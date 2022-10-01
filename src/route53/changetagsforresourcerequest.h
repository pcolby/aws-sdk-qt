// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGETAGSFORRESOURCEREQUEST_H
#define QTAWS_CHANGETAGSFORRESOURCEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ChangeTagsForResourceRequestPrivate;

class QTAWSROUTE53_EXPORT ChangeTagsForResourceRequest : public Route53Request {

public:
    ChangeTagsForResourceRequest(const ChangeTagsForResourceRequest &other);
    ChangeTagsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeTagsForResourceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
