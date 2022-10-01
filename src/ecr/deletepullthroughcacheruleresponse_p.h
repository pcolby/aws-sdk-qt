// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPULLTHROUGHCACHERULERESPONSE_P_H
#define QTAWS_DELETEPULLTHROUGHCACHERULERESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class DeletePullThroughCacheRuleResponse;

class DeletePullThroughCacheRuleResponsePrivate : public EcrResponsePrivate {

public:

    explicit DeletePullThroughCacheRuleResponsePrivate(DeletePullThroughCacheRuleResponse * const q);

    void parseDeletePullThroughCacheRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePullThroughCacheRuleResponse)
    Q_DISABLE_COPY(DeletePullThroughCacheRuleResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
