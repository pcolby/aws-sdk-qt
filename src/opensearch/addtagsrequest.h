// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSREQUEST_H
#define QTAWS_ADDTAGSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class AddTagsRequestPrivate;

class QTAWSOPENSEARCH_EXPORT AddTagsRequest : public OpenSearchRequest {

public:
    AddTagsRequest(const AddTagsRequest &other);
    AddTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
