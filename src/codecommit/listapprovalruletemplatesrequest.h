// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPROVALRULETEMPLATESREQUEST_H
#define QTAWS_LISTAPPROVALRULETEMPLATESREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListApprovalRuleTemplatesRequestPrivate;

class QTAWSCODECOMMIT_EXPORT ListApprovalRuleTemplatesRequest : public CodeCommitRequest {

public:
    ListApprovalRuleTemplatesRequest(const ListApprovalRuleTemplatesRequest &other);
    ListApprovalRuleTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApprovalRuleTemplatesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
