// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEVERSIONSRESPONSE_H
#define QTAWS_GETCOMPATIBLEVERSIONSRESPONSE_H

#include "opensearchresponse.h"
#include "getcompatibleversionsrequest.h"

namespace QtAws {
namespace OpenSearch {

class GetCompatibleVersionsResponsePrivate;

class QTAWSOPENSEARCH_EXPORT GetCompatibleVersionsResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    GetCompatibleVersionsResponse(const GetCompatibleVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCompatibleVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCompatibleVersionsResponse)
    Q_DISABLE_COPY(GetCompatibleVersionsResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
