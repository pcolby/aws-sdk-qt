// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALTABLERESPONSE_P_H
#define QTAWS_UPDATEGLOBALTABLERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class UpdateGlobalTableResponse;

class UpdateGlobalTableResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit UpdateGlobalTableResponsePrivate(UpdateGlobalTableResponse * const q);

    void parseUpdateGlobalTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalTableResponse)
    Q_DISABLE_COPY(UpdateGlobalTableResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
