// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INDEXDOCUMENTSRESPONSE_H
#define QTAWS_INDEXDOCUMENTSRESPONSE_H

#include "cloudsearchresponse.h"
#include "indexdocumentsrequest.h"

namespace QtAws {
namespace CloudSearch {

class IndexDocumentsResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT IndexDocumentsResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    IndexDocumentsResponse(const IndexDocumentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IndexDocumentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IndexDocumentsResponse)
    Q_DISABLE_COPY(IndexDocumentsResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
