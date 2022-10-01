// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERSTRATEGIESREQUEST_H
#define QTAWS_GETSERVERSTRATEGIESREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetServerStrategiesRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetServerStrategiesRequest : public MigrationHubStrategyRequest {

public:
    GetServerStrategiesRequest(const GetServerStrategiesRequest &other);
    GetServerStrategiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServerStrategiesRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
