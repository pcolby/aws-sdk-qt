// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPROVALRULETEMPLATERESPONSE_H
#define QTAWS_CREATEAPPROVALRULETEMPLATERESPONSE_H

#include "codecommitresponse.h"
#include "createapprovalruletemplaterequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateApprovalRuleTemplateResponsePrivate;

class QTAWSCODECOMMIT_EXPORT CreateApprovalRuleTemplateResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    CreateApprovalRuleTemplateResponse(const CreateApprovalRuleTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApprovalRuleTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApprovalRuleTemplateResponse)
    Q_DISABLE_COPY(CreateApprovalRuleTemplateResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
