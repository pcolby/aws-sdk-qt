// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYLOGGINGCONFIGSREQUEST_H
#define QTAWS_LISTQUERYLOGGINGCONFIGSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListQueryLoggingConfigsRequestPrivate;

class QTAWSROUTE53_EXPORT ListQueryLoggingConfigsRequest : public Route53Request {

public:
    ListQueryLoggingConfigsRequest(const ListQueryLoggingConfigsRequest &other);
    ListQueryLoggingConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueryLoggingConfigsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
