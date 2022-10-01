// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESFORDOMAINREQUEST_H
#define QTAWS_LISTPACKAGESFORDOMAINREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListPackagesForDomainRequestPrivate;

class QTAWSOPENSEARCH_EXPORT ListPackagesForDomainRequest : public OpenSearchRequest {

public:
    ListPackagesForDomainRequest(const ListPackagesForDomainRequest &other);
    ListPackagesForDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagesForDomainRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
