// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYLOGGINGCONFIGREQUEST_H
#define QTAWS_DELETEQUERYLOGGINGCONFIGREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class DeleteQueryLoggingConfigRequestPrivate;

class QTAWSROUTE53_EXPORT DeleteQueryLoggingConfigRequest : public Route53Request {

public:
    DeleteQueryLoggingConfigRequest(const DeleteQueryLoggingConfigRequest &other);
    DeleteQueryLoggingConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueryLoggingConfigRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
