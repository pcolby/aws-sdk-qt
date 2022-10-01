// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTFILETASKRESPONSE_P_H
#define QTAWS_GETIMPORTFILETASKRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetImportFileTaskResponse;

class GetImportFileTaskResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetImportFileTaskResponsePrivate(GetImportFileTaskResponse * const q);

    void parseGetImportFileTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImportFileTaskResponse)
    Q_DISABLE_COPY(GetImportFileTaskResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
