// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTFILETASKRESPONSE_P_H
#define QTAWS_STARTIMPORTFILETASKRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartImportFileTaskResponse;

class StartImportFileTaskResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit StartImportFileTaskResponsePrivate(StartImportFileTaskResponse * const q);

    void parseStartImportFileTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartImportFileTaskResponse)
    Q_DISABLE_COPY(StartImportFileTaskResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
