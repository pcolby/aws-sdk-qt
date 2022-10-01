// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONREQUEST_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateDescriptionRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdateApprovalRuleTemplateDescriptionRequest : public CodeCommitRequest {

public:
    UpdateApprovalRuleTemplateDescriptionRequest(const UpdateApprovalRuleTemplateDescriptionRequest &other);
    UpdateApprovalRuleTemplateDescriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApprovalRuleTemplateDescriptionRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
