// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPROVALRULETEMPLATERESPONSE_H
#define QTAWS_DELETEAPPROVALRULETEMPLATERESPONSE_H

#include "codecommitresponse.h"
#include "deleteapprovalruletemplaterequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteApprovalRuleTemplateResponsePrivate;

class QTAWSCODECOMMIT_EXPORT DeleteApprovalRuleTemplateResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    DeleteApprovalRuleTemplateResponse(const DeleteApprovalRuleTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApprovalRuleTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApprovalRuleTemplateResponse)
    Q_DISABLE_COPY(DeleteApprovalRuleTemplateResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
