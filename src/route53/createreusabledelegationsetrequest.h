// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREUSABLEDELEGATIONSETREQUEST_H
#define QTAWS_CREATEREUSABLEDELEGATIONSETREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateReusableDelegationSetRequestPrivate;

class QTAWSROUTE53_EXPORT CreateReusableDelegationSetRequest : public Route53Request {

public:
    CreateReusableDelegationSetRequest(const CreateReusableDelegationSetRequest &other);
    CreateReusableDelegationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReusableDelegationSetRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
