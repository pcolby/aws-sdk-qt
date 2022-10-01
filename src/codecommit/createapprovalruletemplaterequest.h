// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPROVALRULETEMPLATEREQUEST_H
#define QTAWS_CREATEAPPROVALRULETEMPLATEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateApprovalRuleTemplateRequestPrivate;

class QTAWSCODECOMMIT_EXPORT CreateApprovalRuleTemplateRequest : public CodeCommitRequest {

public:
    CreateApprovalRuleTemplateRequest(const CreateApprovalRuleTemplateRequest &other);
    CreateApprovalRuleTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApprovalRuleTemplateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
