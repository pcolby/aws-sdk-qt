// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINSREQUEST_H
#define QTAWS_DESCRIBEDOMAINSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainsRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DescribeDomainsRequest : public OpenSearchRequest {

public:
    DescribeDomainsRequest(const DescribeDomainsRequest &other);
    DescribeDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
