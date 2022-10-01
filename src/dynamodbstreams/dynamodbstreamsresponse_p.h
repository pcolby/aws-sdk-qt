// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBSTREAMSRESPONSE_P_H
#define QTAWS_DYNAMODBSTREAMSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DynamoDbStreams {

class DynamoDbStreamsResponse;

class DynamoDbStreamsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DynamoDbStreamsResponsePrivate(DynamoDbStreamsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DynamoDbStreamsResponse)
    Q_DISABLE_COPY(DynamoDbStreamsResponsePrivate)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
