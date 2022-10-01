// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTFILETASKRESPONSE_H
#define QTAWS_LISTIMPORTFILETASKRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "listimportfiletaskrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListImportFileTaskResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT ListImportFileTaskResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    ListImportFileTaskResponse(const ListImportFileTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImportFileTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportFileTaskResponse)
    Q_DISABLE_COPY(ListImportFileTaskResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
