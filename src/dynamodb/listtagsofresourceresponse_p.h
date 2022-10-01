// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSOFRESOURCERESPONSE_P_H
#define QTAWS_LISTTAGSOFRESOURCERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class ListTagsOfResourceResponse;

class ListTagsOfResourceResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit ListTagsOfResourceResponsePrivate(ListTagsOfResourceResponse * const q);

    void parseListTagsOfResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsOfResourceResponse)
    Q_DISABLE_COPY(ListTagsOfResourceResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
