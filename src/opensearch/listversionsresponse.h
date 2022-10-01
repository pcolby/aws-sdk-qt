// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERSIONSRESPONSE_H
#define QTAWS_LISTVERSIONSRESPONSE_H

#include "opensearchresponse.h"
#include "listversionsrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListVersionsResponsePrivate;

class QTAWSOPENSEARCH_EXPORT ListVersionsResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    ListVersionsResponse(const ListVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVersionsResponse)
    Q_DISABLE_COPY(ListVersionsResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
