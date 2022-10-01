// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSREQUEST_H
#define QTAWS_REMOVETAGSREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class RemoveTagsRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT RemoveTagsRequest : public ElasticsearchRequest {

public:
    RemoveTagsRequest(const RemoveTagsRequest &other);
    RemoveTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
