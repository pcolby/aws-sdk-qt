// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKLASTFAILUREREASONREQUEST_H
#define QTAWS_GETHEALTHCHECKLASTFAILUREREASONREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckLastFailureReasonRequestPrivate;

class QTAWSROUTE53_EXPORT GetHealthCheckLastFailureReasonRequest : public Route53Request {

public:
    GetHealthCheckLastFailureReasonRequest(const GetHealthCheckLastFailureReasonRequest &other);
    GetHealthCheckLastFailureReasonRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHealthCheckLastFailureReasonRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
