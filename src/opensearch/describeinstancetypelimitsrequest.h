// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPELIMITSREQUEST_H
#define QTAWS_DESCRIBEINSTANCETYPELIMITSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeInstanceTypeLimitsRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DescribeInstanceTypeLimitsRequest : public OpenSearchRequest {

public:
    DescribeInstanceTypeLimitsRequest(const DescribeInstanceTypeLimitsRequest &other);
    DescribeInstanceTypeLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceTypeLimitsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
