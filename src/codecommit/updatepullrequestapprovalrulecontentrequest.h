// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTAPPROVALRULECONTENTREQUEST_H
#define QTAWS_UPDATEPULLREQUESTAPPROVALRULECONTENTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestApprovalRuleContentRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestApprovalRuleContentRequest : public CodeCommitRequest {

public:
    UpdatePullRequestApprovalRuleContentRequest(const UpdatePullRequestApprovalRuleContentRequest &other);
    UpdatePullRequestApprovalRuleContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestApprovalRuleContentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
