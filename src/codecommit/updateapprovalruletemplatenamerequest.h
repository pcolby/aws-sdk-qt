// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATENAMEREQUEST_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATENAMEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateNameRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdateApprovalRuleTemplateNameRequest : public CodeCommitRequest {

public:
    UpdateApprovalRuleTemplateNameRequest(const UpdateApprovalRuleTemplateNameRequest &other);
    UpdateApprovalRuleTemplateNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApprovalRuleTemplateNameRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
