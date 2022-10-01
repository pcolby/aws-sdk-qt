// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECIDRCOLLECTIONREQUEST_H
#define QTAWS_CREATECIDRCOLLECTIONREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateCidrCollectionRequestPrivate;

class QTAWSROUTE53_EXPORT CreateCidrCollectionRequest : public Route53Request {

public:
    CreateCidrCollectionRequest(const CreateCidrCollectionRequest &other);
    CreateCidrCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCidrCollectionRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
