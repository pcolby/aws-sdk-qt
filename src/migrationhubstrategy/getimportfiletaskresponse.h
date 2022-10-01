// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTFILETASKRESPONSE_H
#define QTAWS_GETIMPORTFILETASKRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getimportfiletaskrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetImportFileTaskResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetImportFileTaskResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetImportFileTaskResponse(const GetImportFileTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImportFileTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImportFileTaskResponse)
    Q_DISABLE_COPY(GetImportFileTaskResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
