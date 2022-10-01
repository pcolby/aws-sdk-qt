// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKINESISSTREAMINGDESTINATIONRESPONSE_P_H
#define QTAWS_ENABLEKINESISSTREAMINGDESTINATIONRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class EnableKinesisStreamingDestinationResponse;

class EnableKinesisStreamingDestinationResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit EnableKinesisStreamingDestinationResponsePrivate(EnableKinesisStreamingDestinationResponse * const q);

    void parseEnableKinesisStreamingDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableKinesisStreamingDestinationResponse)
    Q_DISABLE_COPY(EnableKinesisStreamingDestinationResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
