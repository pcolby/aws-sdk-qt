// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSFORPACKAGERESPONSE_H
#define QTAWS_LISTDOMAINSFORPACKAGERESPONSE_H

#include "opensearchresponse.h"
#include "listdomainsforpackagerequest.h"

namespace QtAws {
namespace OpenSearch {

class ListDomainsForPackageResponsePrivate;

class QTAWSOPENSEARCH_EXPORT ListDomainsForPackageResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    ListDomainsForPackageResponse(const ListDomainsForPackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDomainsForPackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainsForPackageResponse)
    Q_DISABLE_COPY(ListDomainsForPackageResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
