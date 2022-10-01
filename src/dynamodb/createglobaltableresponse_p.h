// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALTABLERESPONSE_P_H
#define QTAWS_CREATEGLOBALTABLERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class CreateGlobalTableResponse;

class CreateGlobalTableResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit CreateGlobalTableResponsePrivate(CreateGlobalTableResponse * const q);

    void parseCreateGlobalTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGlobalTableResponse)
    Q_DISABLE_COPY(CreateGlobalTableResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
