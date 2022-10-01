// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLTHROUGHCACHERULERESPONSE_P_H
#define QTAWS_CREATEPULLTHROUGHCACHERULERESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class CreatePullThroughCacheRuleResponse;

class CreatePullThroughCacheRuleResponsePrivate : public EcrResponsePrivate {

public:

    explicit CreatePullThroughCacheRuleResponsePrivate(CreatePullThroughCacheRuleResponse * const q);

    void parseCreatePullThroughCacheRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePullThroughCacheRuleResponse)
    Q_DISABLE_COPY(CreatePullThroughCacheRuleResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
