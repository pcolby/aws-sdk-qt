// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONCOMPONENTSTRATEGIESRESPONSE_H
#define QTAWS_GETAPPLICATIONCOMPONENTSTRATEGIESRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getapplicationcomponentstrategiesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetApplicationComponentStrategiesResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetApplicationComponentStrategiesResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetApplicationComponentStrategiesResponse(const GetApplicationComponentStrategiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationComponentStrategiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationComponentStrategiesResponse)
    Q_DISABLE_COPY(GetApplicationComponentStrategiesResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
