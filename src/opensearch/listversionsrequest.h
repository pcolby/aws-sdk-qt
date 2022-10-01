// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERSIONSREQUEST_H
#define QTAWS_LISTVERSIONSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListVersionsRequestPrivate;

class QTAWSOPENSEARCH_EXPORT ListVersionsRequest : public OpenSearchRequest {

public:
    ListVersionsRequest(const ListVersionsRequest &other);
    ListVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVersionsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
