// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTFILETASKREQUEST_H
#define QTAWS_LISTIMPORTFILETASKREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListImportFileTaskRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT ListImportFileTaskRequest : public MigrationHubStrategyRequest {

public:
    ListImportFileTaskRequest(const ListImportFileTaskRequest &other);
    ListImportFileTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportFileTaskRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
