// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPROVALRULETEMPLATERESPONSE_H
#define QTAWS_GETAPPROVALRULETEMPLATERESPONSE_H

#include "codecommitresponse.h"
#include "getapprovalruletemplaterequest.h"

namespace QtAws {
namespace CodeCommit {

class GetApprovalRuleTemplateResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetApprovalRuleTemplateResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetApprovalRuleTemplateResponse(const GetApprovalRuleTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApprovalRuleTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApprovalRuleTemplateResponse)
    Q_DISABLE_COPY(GetApprovalRuleTemplateResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
