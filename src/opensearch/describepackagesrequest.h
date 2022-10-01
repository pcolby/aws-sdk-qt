// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGESREQUEST_H
#define QTAWS_DESCRIBEPACKAGESREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribePackagesRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DescribePackagesRequest : public OpenSearchRequest {

public:
    DescribePackagesRequest(const DescribePackagesRequest &other);
    DescribePackagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackagesRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
