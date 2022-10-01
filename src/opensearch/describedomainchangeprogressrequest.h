// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCHANGEPROGRESSREQUEST_H
#define QTAWS_DESCRIBEDOMAINCHANGEPROGRESSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainChangeProgressRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DescribeDomainChangeProgressRequest : public OpenSearchRequest {

public:
    DescribeDomainChangeProgressRequest(const DescribeDomainChangeProgressRequest &other);
    DescribeDomainChangeProgressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainChangeProgressRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
