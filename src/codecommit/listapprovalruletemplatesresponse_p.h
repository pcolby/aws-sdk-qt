// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPROVALRULETEMPLATESRESPONSE_P_H
#define QTAWS_LISTAPPROVALRULETEMPLATESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class ListApprovalRuleTemplatesResponse;

class ListApprovalRuleTemplatesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit ListApprovalRuleTemplatesResponsePrivate(ListApprovalRuleTemplatesResponse * const q);

    void parseListApprovalRuleTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApprovalRuleTemplatesResponse)
    Q_DISABLE_COPY(ListApprovalRuleTemplatesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
