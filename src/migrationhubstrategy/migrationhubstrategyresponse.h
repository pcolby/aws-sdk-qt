// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBSTRATEGYRESPONSE_H
#define QTAWS_MIGRATIONHUBSTRATEGYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmigrationhubstrategyglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MigrationHubStrategy {

class MigrationHubStrategyResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT MigrationHubStrategyResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MigrationHubStrategyResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MigrationHubStrategyResponse(MigrationHubStrategyResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrationHubStrategyResponse)
    Q_DISABLE_COPY(MigrationHubStrategyResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
