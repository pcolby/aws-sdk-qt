// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSOFRESOURCERESPONSE_H
#define QTAWS_LISTTAGSOFRESOURCERESPONSE_H

#include "dynamodbresponse.h"
#include "listtagsofresourcerequest.h"

namespace QtAws {
namespace DynamoDb {

class ListTagsOfResourceResponsePrivate;

class QTAWSDYNAMODB_EXPORT ListTagsOfResourceResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    ListTagsOfResourceResponse(const ListTagsOfResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsOfResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsOfResourceResponse)
    Q_DISABLE_COPY(ListTagsOfResourceResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
