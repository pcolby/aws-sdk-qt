// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULERESPONSE_P_H
#define QTAWS_DELETERULERESPONSE_P_H

#include "rbinresponse_p.h"

namespace QtAws {
namespace Rbin {

class DeleteRuleResponse;

class DeleteRuleResponsePrivate : public RbinResponsePrivate {

public:

    explicit DeleteRuleResponsePrivate(DeleteRuleResponse * const q);

    void parseDeleteRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRuleResponse)
    Q_DISABLE_COPY(DeleteRuleResponsePrivate)

};

} // namespace Rbin
} // namespace QtAws

#endif
