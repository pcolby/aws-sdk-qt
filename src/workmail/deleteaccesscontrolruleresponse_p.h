// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSCONTROLRULERESPONSE_P_H
#define QTAWS_DELETEACCESSCONTROLRULERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeleteAccessControlRuleResponse;

class DeleteAccessControlRuleResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeleteAccessControlRuleResponsePrivate(DeleteAccessControlRuleResponse * const q);

    void parseDeleteAccessControlRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessControlRuleResponse)
    Q_DISABLE_COPY(DeleteAccessControlRuleResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
