// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OVERRIDEPULLREQUESTAPPROVALRULESREQUEST_H
#define QTAWS_OVERRIDEPULLREQUESTAPPROVALRULESREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class OverridePullRequestApprovalRulesRequestPrivate;

class QTAWSCODECOMMIT_EXPORT OverridePullRequestApprovalRulesRequest : public CodeCommitRequest {

public:
    OverridePullRequestApprovalRulesRequest(const OverridePullRequestApprovalRulesRequest &other);
    OverridePullRequestApprovalRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OverridePullRequestApprovalRulesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
