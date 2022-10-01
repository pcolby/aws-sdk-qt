// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATECONTENTRESPONSE_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATECONTENTRESPONSE_H

#include "codecommitresponse.h"
#include "updateapprovalruletemplatecontentrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateContentResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdateApprovalRuleTemplateContentResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdateApprovalRuleTemplateContentResponse(const UpdateApprovalRuleTemplateContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApprovalRuleTemplateContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApprovalRuleTemplateContentResponse)
    Q_DISABLE_COPY(UpdateApprovalRuleTemplateContentResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
