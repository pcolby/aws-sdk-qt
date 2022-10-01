// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONHISTORYRESPONSE_H
#define QTAWS_GETPACKAGEVERSIONHISTORYRESPONSE_H

#include "elasticsearchresponse.h"
#include "getpackageversionhistoryrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetPackageVersionHistoryResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT GetPackageVersionHistoryResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    GetPackageVersionHistoryResponse(const GetPackageVersionHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPackageVersionHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPackageVersionHistoryResponse)
    Q_DISABLE_COPY(GetPackageVersionHistoryResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
