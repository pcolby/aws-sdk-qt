// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEDOMAINREQUEST_H
#define QTAWS_UPGRADEDOMAINREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class UpgradeDomainRequestPrivate;

class QTAWSOPENSEARCH_EXPORT UpgradeDomainRequest : public OpenSearchRequest {

public:
    UpgradeDomainRequest(const UpgradeDomainRequest &other);
    UpgradeDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradeDomainRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
