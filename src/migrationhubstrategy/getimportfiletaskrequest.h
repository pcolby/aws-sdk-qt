// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTFILETASKREQUEST_H
#define QTAWS_GETIMPORTFILETASKREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetImportFileTaskRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetImportFileTaskRequest : public MigrationHubStrategyRequest {

public:
    GetImportFileTaskRequest(const GetImportFileTaskRequest &other);
    GetImportFileTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImportFileTaskRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
