// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUERYLOGGINGCONFIGREQUEST_H
#define QTAWS_CREATEQUERYLOGGINGCONFIGREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateQueryLoggingConfigRequestPrivate;

class QTAWSROUTE53_EXPORT CreateQueryLoggingConfigRequest : public Route53Request {

public:
    CreateQueryLoggingConfigRequest(const CreateQueryLoggingConfigRequest &other);
    CreateQueryLoggingConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQueryLoggingConfigRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
