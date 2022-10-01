// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGERESOURCERECORDSETSREQUEST_H
#define QTAWS_CHANGERESOURCERECORDSETSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ChangeResourceRecordSetsRequestPrivate;

class QTAWSROUTE53_EXPORT ChangeResourceRecordSetsRequest : public Route53Request {

public:
    ChangeResourceRecordSetsRequest(const ChangeResourceRecordSetsRequest &other);
    ChangeResourceRecordSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeResourceRecordSetsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
