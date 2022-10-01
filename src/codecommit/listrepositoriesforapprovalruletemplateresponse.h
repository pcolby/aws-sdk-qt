// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESFORAPPROVALRULETEMPLATERESPONSE_H
#define QTAWS_LISTREPOSITORIESFORAPPROVALRULETEMPLATERESPONSE_H

#include "codecommitresponse.h"
#include "listrepositoriesforapprovalruletemplaterequest.h"

namespace QtAws {
namespace CodeCommit {

class ListRepositoriesForApprovalRuleTemplateResponsePrivate;

class QTAWSCODECOMMIT_EXPORT ListRepositoriesForApprovalRuleTemplateResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    ListRepositoriesForApprovalRuleTemplateResponse(const ListRepositoriesForApprovalRuleTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRepositoriesForApprovalRuleTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoriesForApprovalRuleTemplateResponse)
    Q_DISABLE_COPY(ListRepositoriesForApprovalRuleTemplateResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
