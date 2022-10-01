// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDSRESPONSE_P_H
#define QTAWS_GETRECORDSRESPONSE_P_H

#include "dynamodbstreamsresponse_p.h"

namespace QtAws {
namespace DynamoDbStreams {

class GetRecordsResponse;

class GetRecordsResponsePrivate : public DynamoDbStreamsResponsePrivate {

public:

    explicit GetRecordsResponsePrivate(GetRecordsResponse * const q);

    void parseGetRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecordsResponse)
    Q_DISABLE_COPY(GetRecordsResponsePrivate)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
