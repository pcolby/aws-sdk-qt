// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPROVALRULETEMPLATEREQUEST_H
#define QTAWS_GETAPPROVALRULETEMPLATEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetApprovalRuleTemplateRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetApprovalRuleTemplateRequest : public CodeCommitRequest {

public:
    GetApprovalRuleTemplateRequest(const GetApprovalRuleTemplateRequest &other);
    GetApprovalRuleTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApprovalRuleTemplateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
