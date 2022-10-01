// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESREQUEST_H
#define QTAWS_LISTDOMAINNAMESREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListDomainNamesRequestPrivate;

class QTAWSOPENSEARCH_EXPORT ListDomainNamesRequest : public OpenSearchRequest {

public:
    ListDomainNamesRequest(const ListDomainNamesRequest &other);
    ListDomainNamesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainNamesRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
