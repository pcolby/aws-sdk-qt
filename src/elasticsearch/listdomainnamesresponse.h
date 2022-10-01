// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESRESPONSE_H
#define QTAWS_LISTDOMAINNAMESRESPONSE_H

#include "elasticsearchresponse.h"
#include "listdomainnamesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListDomainNamesResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT ListDomainNamesResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    ListDomainNamesResponse(const ListDomainNamesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDomainNamesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainNamesResponse)
    Q_DISABLE_COPY(ListDomainNamesResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
