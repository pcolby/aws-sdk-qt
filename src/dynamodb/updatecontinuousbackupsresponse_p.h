// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTINUOUSBACKUPSRESPONSE_P_H
#define QTAWS_UPDATECONTINUOUSBACKUPSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class UpdateContinuousBackupsResponse;

class UpdateContinuousBackupsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit UpdateContinuousBackupsResponsePrivate(UpdateContinuousBackupsResponse * const q);

    void parseUpdateContinuousBackupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContinuousBackupsResponse)
    Q_DISABLE_COPY(UpdateContinuousBackupsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
