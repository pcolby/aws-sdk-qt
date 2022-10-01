// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATECONTENTREQUEST_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATECONTENTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateContentRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdateApprovalRuleTemplateContentRequest : public CodeCommitRequest {

public:
    UpdateApprovalRuleTemplateContentRequest(const UpdateApprovalRuleTemplateContentRequest &other);
    UpdateApprovalRuleTemplateContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApprovalRuleTemplateContentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
