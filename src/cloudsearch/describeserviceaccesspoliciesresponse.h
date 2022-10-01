// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACCESSPOLICIESRESPONSE_H
#define QTAWS_DESCRIBESERVICEACCESSPOLICIESRESPONSE_H

#include "cloudsearchresponse.h"
#include "describeserviceaccesspoliciesrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeServiceAccessPoliciesResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeServiceAccessPoliciesResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeServiceAccessPoliciesResponse(const DescribeServiceAccessPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServiceAccessPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceAccessPoliciesResponse)
    Q_DISABLE_COPY(DescribeServiceAccessPoliciesResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
