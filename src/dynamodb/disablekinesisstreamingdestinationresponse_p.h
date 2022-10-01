// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKINESISSTREAMINGDESTINATIONRESPONSE_P_H
#define QTAWS_DISABLEKINESISSTREAMINGDESTINATIONRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DisableKinesisStreamingDestinationResponse;

class DisableKinesisStreamingDestinationResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DisableKinesisStreamingDestinationResponsePrivate(DisableKinesisStreamingDestinationResponse * const q);

    void parseDisableKinesisStreamingDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableKinesisStreamingDestinationResponse)
    Q_DISABLE_COPY(DisableKinesisStreamingDestinationResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
