// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSRESPONSE_H
#define QTAWS_REMOVETAGSRESPONSE_H

#include "opensearchresponse.h"
#include "removetagsrequest.h"

namespace QtAws {
namespace OpenSearch {

class RemoveTagsResponsePrivate;

class QTAWSOPENSEARCH_EXPORT RemoveTagsResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    RemoveTagsResponse(const RemoveTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsResponse)
    Q_DISABLE_COPY(RemoveTagsResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
