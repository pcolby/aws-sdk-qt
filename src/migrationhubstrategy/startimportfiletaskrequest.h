// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTFILETASKREQUEST_H
#define QTAWS_STARTIMPORTFILETASKREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartImportFileTaskRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT StartImportFileTaskRequest : public MigrationHubStrategyRequest {

public:
    StartImportFileTaskRequest(const StartImportFileTaskRequest &other);
    StartImportFileTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportFileTaskRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
