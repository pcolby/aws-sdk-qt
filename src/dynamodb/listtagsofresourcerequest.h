// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSOFRESOURCEREQUEST_H
#define QTAWS_LISTTAGSOFRESOURCEREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListTagsOfResourceRequestPrivate;

class QTAWSDYNAMODB_EXPORT ListTagsOfResourceRequest : public DynamoDbRequest {

public:
    ListTagsOfResourceRequest(const ListTagsOfResourceRequest &other);
    ListTagsOfResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsOfResourceRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
