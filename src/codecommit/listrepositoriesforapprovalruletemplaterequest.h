// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESFORAPPROVALRULETEMPLATEREQUEST_H
#define QTAWS_LISTREPOSITORIESFORAPPROVALRULETEMPLATEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListRepositoriesForApprovalRuleTemplateRequestPrivate;

class QTAWSCODECOMMIT_EXPORT ListRepositoriesForApprovalRuleTemplateRequest : public CodeCommitRequest {

public:
    ListRepositoriesForApprovalRuleTemplateRequest(const ListRepositoriesForApprovalRuleTemplateRequest &other);
    ListRepositoriesForApprovalRuleTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoriesForApprovalRuleTemplateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
