// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCERECORDSETSREQUEST_H
#define QTAWS_LISTRESOURCERECORDSETSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListResourceRecordSetsRequestPrivate;

class QTAWSROUTE53_EXPORT ListResourceRecordSetsRequest : public Route53Request {

public:
    ListResourceRecordSetsRequest(const ListResourceRecordSetsRequest &other);
    ListResourceRecordSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceRecordSetsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
