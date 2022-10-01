// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEPOLICYSTATEMENTRESPONSE_P_H
#define QTAWS_CREATERESOURCEPOLICYSTATEMENTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateResourcePolicyStatementResponse;

class CreateResourcePolicyStatementResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateResourcePolicyStatementResponsePrivate(CreateResourcePolicyStatementResponse * const q);

    void parseCreateResourcePolicyStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourcePolicyStatementResponse)
    Q_DISABLE_COPY(CreateResourcePolicyStatementResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
