// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONFIGREQUEST_H
#define QTAWS_DESCRIBEDOMAINCONFIGREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainConfigRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DescribeDomainConfigRequest : public OpenSearchRequest {

public:
    DescribeDomainConfigRequest(const DescribeDomainConfigRequest &other);
    DescribeDomainConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainConfigRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
