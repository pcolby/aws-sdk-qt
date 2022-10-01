// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCANRESPONSE_P_H
#define QTAWS_SCANRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class ScanResponse;

class ScanResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit ScanResponsePrivate(ScanResponse * const q);

    void parseScanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ScanResponse)
    Q_DISABLE_COPY(ScanResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
