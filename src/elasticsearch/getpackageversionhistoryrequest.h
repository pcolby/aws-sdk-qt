// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONHISTORYREQUEST_H
#define QTAWS_GETPACKAGEVERSIONHISTORYREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetPackageVersionHistoryRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT GetPackageVersionHistoryRequest : public ElasticsearchRequest {

public:
    GetPackageVersionHistoryRequest(const GetPackageVersionHistoryRequest &other);
    GetPackageVersionHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPackageVersionHistoryRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
