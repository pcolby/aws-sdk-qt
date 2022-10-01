// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLREQUESTAPPROVALRULEREQUEST_H
#define QTAWS_CREATEPULLREQUESTAPPROVALRULEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreatePullRequestApprovalRuleRequestPrivate;

class QTAWSCODECOMMIT_EXPORT CreatePullRequestApprovalRuleRequest : public CodeCommitRequest {

public:
    CreatePullRequestApprovalRuleRequest(const CreatePullRequestApprovalRuleRequest &other);
    CreatePullRequestApprovalRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePullRequestApprovalRuleRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
