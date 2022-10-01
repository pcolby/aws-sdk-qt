// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINDEXFIELDSREQUEST_H
#define QTAWS_DESCRIBEINDEXFIELDSREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeIndexFieldsRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeIndexFieldsRequest : public CloudSearchRequest {

public:
    DescribeIndexFieldsRequest(const DescribeIndexFieldsRequest &other);
    DescribeIndexFieldsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIndexFieldsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
