// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTFILETASKRESPONSE_H
#define QTAWS_STARTIMPORTFILETASKRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "startimportfiletaskrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartImportFileTaskResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT StartImportFileTaskResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    StartImportFileTaskResponse(const StartImportFileTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImportFileTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportFileTaskResponse)
    Q_DISABLE_COPY(StartImportFileTaskResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
