// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDAPPROVALRULETEMPLATESFORREPOSITORYRESPONSE_P_H
#define QTAWS_LISTASSOCIATEDAPPROVALRULETEMPLATESFORREPOSITORYRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class ListAssociatedApprovalRuleTemplatesForRepositoryResponse;

class ListAssociatedApprovalRuleTemplatesForRepositoryResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit ListAssociatedApprovalRuleTemplatesForRepositoryResponsePrivate(ListAssociatedApprovalRuleTemplatesForRepositoryResponse * const q);

    void parseListAssociatedApprovalRuleTemplatesForRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociatedApprovalRuleTemplatesForRepositoryResponse)
    Q_DISABLE_COPY(ListAssociatedApprovalRuleTemplatesForRepositoryResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
