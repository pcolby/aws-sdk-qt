// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBRESPONSE_H
#define QTAWS_MIGRATIONHUBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmigrationhubglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MigrationHub {

class MigrationHubResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT MigrationHubResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MigrationHubResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MigrationHubResponse(MigrationHubResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrationHubResponse)
    Q_DISABLE_COPY(MigrationHubResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
