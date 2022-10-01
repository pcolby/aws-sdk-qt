// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACCESSPOLICIESREQUEST_H
#define QTAWS_DESCRIBESERVICEACCESSPOLICIESREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeServiceAccessPoliciesRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeServiceAccessPoliciesRequest : public CloudSearchRequest {

public:
    DescribeServiceAccessPoliciesRequest(const DescribeServiceAccessPoliciesRequest &other);
    DescribeServiceAccessPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceAccessPoliciesRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
