// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONRESPONSE_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONRESPONSE_H

#include "codecommitresponse.h"
#include "updateapprovalruletemplatedescriptionrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateDescriptionResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdateApprovalRuleTemplateDescriptionResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdateApprovalRuleTemplateDescriptionResponse(const UpdateApprovalRuleTemplateDescriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApprovalRuleTemplateDescriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApprovalRuleTemplateDescriptionResponse)
    Q_DISABLE_COPY(UpdateApprovalRuleTemplateDescriptionResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
