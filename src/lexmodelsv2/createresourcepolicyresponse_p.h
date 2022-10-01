// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEPOLICYRESPONSE_P_H
#define QTAWS_CREATERESOURCEPOLICYRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateResourcePolicyResponse;

class CreateResourcePolicyResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateResourcePolicyResponsePrivate(CreateResourcePolicyResponse * const q);

    void parseCreateResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourcePolicyResponse)
    Q_DISABLE_COPY(CreateResourcePolicyResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
