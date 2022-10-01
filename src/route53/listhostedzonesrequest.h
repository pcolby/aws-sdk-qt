// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESREQUEST_H
#define QTAWS_LISTHOSTEDZONESREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesRequestPrivate;

class QTAWSROUTE53_EXPORT ListHostedZonesRequest : public Route53Request {

public:
    ListHostedZonesRequest(const ListHostedZonesRequest &other);
    ListHostedZonesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostedZonesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
