// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICPOLICYREQUEST_H
#define QTAWS_DELETETRAFFICPOLICYREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class DeleteTrafficPolicyRequestPrivate;

class QTAWSROUTE53_EXPORT DeleteTrafficPolicyRequest : public Route53Request {

public:
    DeleteTrafficPolicyRequest(const DeleteTrafficPolicyRequest &other);
    DeleteTrafficPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficPolicyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
