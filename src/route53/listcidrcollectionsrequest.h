// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRCOLLECTIONSREQUEST_H
#define QTAWS_LISTCIDRCOLLECTIONSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListCidrCollectionsRequestPrivate;

class QTAWSROUTE53_EXPORT ListCidrCollectionsRequest : public Route53Request {

public:
    ListCidrCollectionsRequest(const ListCidrCollectionsRequest &other);
    ListCidrCollectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCidrCollectionsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
