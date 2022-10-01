// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTFILETASKRESPONSE_P_H
#define QTAWS_LISTIMPORTFILETASKRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListImportFileTaskResponse;

class ListImportFileTaskResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit ListImportFileTaskResponsePrivate(ListImportFileTaskResponse * const q);

    void parseListImportFileTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImportFileTaskResponse)
    Q_DISABLE_COPY(ListImportFileTaskResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
