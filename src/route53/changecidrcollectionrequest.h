// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGECIDRCOLLECTIONREQUEST_H
#define QTAWS_CHANGECIDRCOLLECTIONREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ChangeCidrCollectionRequestPrivate;

class QTAWSROUTE53_EXPORT ChangeCidrCollectionRequest : public Route53Request {

public:
    ChangeCidrCollectionRequest(const ChangeCidrCollectionRequest &other);
    ChangeCidrCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeCidrCollectionRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
