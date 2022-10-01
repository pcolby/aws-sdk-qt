// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEPOLICYRESPONSE_P_H
#define QTAWS_UPDATERESOURCEPOLICYRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateResourcePolicyResponse;

class UpdateResourcePolicyResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit UpdateResourcePolicyResponsePrivate(UpdateResourcePolicyResponse * const q);

    void parseUpdateResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourcePolicyResponse)
    Q_DISABLE_COPY(UpdateResourcePolicyResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
