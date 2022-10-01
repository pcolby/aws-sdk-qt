// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETIMETOLIVERESPONSE_P_H
#define QTAWS_UPDATETIMETOLIVERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class UpdateTimeToLiveResponse;

class UpdateTimeToLiveResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit UpdateTimeToLiveResponsePrivate(UpdateTimeToLiveResponse * const q);

    void parseUpdateTimeToLiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTimeToLiveResponse)
    Q_DISABLE_COPY(UpdateTimeToLiveResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
