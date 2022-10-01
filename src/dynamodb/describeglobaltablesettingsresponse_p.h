// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALTABLESETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBEGLOBALTABLESETTINGSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeGlobalTableSettingsResponse;

class DescribeGlobalTableSettingsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeGlobalTableSettingsResponsePrivate(DescribeGlobalTableSettingsResponse * const q);

    void parseDescribeGlobalTableSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalTableSettingsResponse)
    Q_DISABLE_COPY(DescribeGlobalTableSettingsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
