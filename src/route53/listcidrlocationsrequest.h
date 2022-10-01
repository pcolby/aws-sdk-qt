// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRLOCATIONSREQUEST_H
#define QTAWS_LISTCIDRLOCATIONSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListCidrLocationsRequestPrivate;

class QTAWSROUTE53_EXPORT ListCidrLocationsRequest : public Route53Request {

public:
    ListCidrLocationsRequest(const ListCidrLocationsRequest &other);
    ListCidrLocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCidrLocationsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
