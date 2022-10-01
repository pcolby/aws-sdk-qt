// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHEALTHCHECKREQUEST_H
#define QTAWS_DELETEHEALTHCHECKREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class DeleteHealthCheckRequestPrivate;

class QTAWSROUTE53_EXPORT DeleteHealthCheckRequest : public Route53Request {

public:
    DeleteHealthCheckRequest(const DeleteHealthCheckRequest &other);
    DeleteHealthCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHealthCheckRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
