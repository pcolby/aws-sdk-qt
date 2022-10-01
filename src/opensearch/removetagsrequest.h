// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSREQUEST_H
#define QTAWS_REMOVETAGSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class RemoveTagsRequestPrivate;

class QTAWSOPENSEARCH_EXPORT RemoveTagsRequest : public OpenSearchRequest {

public:
    RemoveTagsRequest(const RemoveTagsRequest &other);
    RemoveTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
