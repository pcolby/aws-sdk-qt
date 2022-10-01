// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALTABLESETTINGSRESPONSE_P_H
#define QTAWS_UPDATEGLOBALTABLESETTINGSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class UpdateGlobalTableSettingsResponse;

class UpdateGlobalTableSettingsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit UpdateGlobalTableSettingsResponsePrivate(UpdateGlobalTableSettingsResponse * const q);

    void parseUpdateGlobalTableSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalTableSettingsResponse)
    Q_DISABLE_COPY(UpdateGlobalTableSettingsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
