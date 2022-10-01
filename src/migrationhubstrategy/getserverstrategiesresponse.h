// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERSTRATEGIESRESPONSE_H
#define QTAWS_GETSERVERSTRATEGIESRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getserverstrategiesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetServerStrategiesResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetServerStrategiesResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetServerStrategiesResponse(const GetServerStrategiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServerStrategiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServerStrategiesResponse)
    Q_DISABLE_COPY(GetServerStrategiesResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
