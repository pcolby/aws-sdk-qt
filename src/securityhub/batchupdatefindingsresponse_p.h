// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEFINDINGSRESPONSE_P_H
#define QTAWS_BATCHUPDATEFINDINGSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class BatchUpdateFindingsResponse;

class BatchUpdateFindingsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit BatchUpdateFindingsResponsePrivate(BatchUpdateFindingsResponse * const q);

    void parseBatchUpdateFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdateFindingsResponse)
    Q_DISABLE_COPY(BatchUpdateFindingsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
