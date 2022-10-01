// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHIMPORTFINDINGSRESPONSE_P_H
#define QTAWS_BATCHIMPORTFINDINGSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class BatchImportFindingsResponse;

class BatchImportFindingsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit BatchImportFindingsResponsePrivate(BatchImportFindingsResponse * const q);

    void parseBatchImportFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchImportFindingsResponse)
    Q_DISABLE_COPY(BatchImportFindingsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
