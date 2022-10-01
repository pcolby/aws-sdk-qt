// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATENAMERESPONSE_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATENAMERESPONSE_H

#include "codecommitresponse.h"
#include "updateapprovalruletemplatenamerequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateNameResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdateApprovalRuleTemplateNameResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdateApprovalRuleTemplateNameResponse(const UpdateApprovalRuleTemplateNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApprovalRuleTemplateNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApprovalRuleTemplateNameResponse)
    Q_DISABLE_COPY(UpdateApprovalRuleTemplateNameResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
