// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSRESPONSE_P_H
#define QTAWS_LISTSTREAMSRESPONSE_P_H

#include "dynamodbstreamsresponse_p.h"

namespace QtAws {
namespace DynamoDbStreams {

class ListStreamsResponse;

class ListStreamsResponsePrivate : public DynamoDbStreamsResponsePrivate {

public:

    explicit ListStreamsResponsePrivate(ListStreamsResponse * const q);

    void parseListStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamsResponse)
    Q_DISABLE_COPY(ListStreamsResponsePrivate)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
