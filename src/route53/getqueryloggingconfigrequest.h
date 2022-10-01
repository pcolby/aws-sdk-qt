// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYLOGGINGCONFIGREQUEST_H
#define QTAWS_GETQUERYLOGGINGCONFIGREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetQueryLoggingConfigRequestPrivate;

class QTAWSROUTE53_EXPORT GetQueryLoggingConfigRequest : public Route53Request {

public:
    GetQueryLoggingConfigRequest(const GetQueryLoggingConfigRequest &other);
    GetQueryLoggingConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryLoggingConfigRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
