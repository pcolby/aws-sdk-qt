// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBREFACTORSPACESRESPONSE_H
#define QTAWS_MIGRATIONHUBREFACTORSPACESRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmigrationhubrefactorspacesglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class MigrationHubRefactorSpacesResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT MigrationHubRefactorSpacesResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MigrationHubRefactorSpacesResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MigrationHubRefactorSpacesResponse(MigrationHubRefactorSpacesResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrationHubRefactorSpacesResponse)
    Q_DISABLE_COPY(MigrationHubRefactorSpacesResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
