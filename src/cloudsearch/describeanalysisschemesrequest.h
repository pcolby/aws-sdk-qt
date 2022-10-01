// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISSCHEMESREQUEST_H
#define QTAWS_DESCRIBEANALYSISSCHEMESREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeAnalysisSchemesRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeAnalysisSchemesRequest : public CloudSearchRequest {

public:
    DescribeAnalysisSchemesRequest(const DescribeAnalysisSchemesRequest &other);
    DescribeAnalysisSchemesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnalysisSchemesRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
