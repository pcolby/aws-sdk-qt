// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYSTATEMENTRESPONSE_P_H
#define QTAWS_DELETERESOURCEPOLICYSTATEMENTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteResourcePolicyStatementResponse;

class DeleteResourcePolicyStatementResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteResourcePolicyStatementResponsePrivate(DeleteResourcePolicyStatementResponse * const q);

    void parseDeleteResourcePolicyStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourcePolicyStatementResponse)
    Q_DISABLE_COPY(DeleteResourcePolicyStatementResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
