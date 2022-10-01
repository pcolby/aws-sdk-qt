// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBCONFIGRESPONSE_H
#define QTAWS_MIGRATIONHUBCONFIGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmigrationhubconfigglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MigrationHubConfig {

class MigrationHubConfigResponsePrivate;

class QTAWSMIGRATIONHUBCONFIG_EXPORT MigrationHubConfigResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MigrationHubConfigResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MigrationHubConfigResponse(MigrationHubConfigResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrationHubConfigResponse)
    Q_DISABLE_COPY(MigrationHubConfigResponse)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
