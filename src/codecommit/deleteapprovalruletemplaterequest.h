// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPROVALRULETEMPLATEREQUEST_H
#define QTAWS_DELETEAPPROVALRULETEMPLATEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteApprovalRuleTemplateRequestPrivate;

class QTAWSCODECOMMIT_EXPORT DeleteApprovalRuleTemplateRequest : public CodeCommitRequest {

public:
    DeleteApprovalRuleTemplateRequest(const DeleteApprovalRuleTemplateRequest &other);
    DeleteApprovalRuleTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApprovalRuleTemplateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
