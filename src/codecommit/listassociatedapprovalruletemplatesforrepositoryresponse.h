// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDAPPROVALRULETEMPLATESFORREPOSITORYRESPONSE_H
#define QTAWS_LISTASSOCIATEDAPPROVALRULETEMPLATESFORREPOSITORYRESPONSE_H

#include "codecommitresponse.h"
#include "listassociatedapprovalruletemplatesforrepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListAssociatedApprovalRuleTemplatesForRepositoryResponsePrivate;

class QTAWSCODECOMMIT_EXPORT ListAssociatedApprovalRuleTemplatesForRepositoryResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    ListAssociatedApprovalRuleTemplatesForRepositoryResponse(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociatedApprovalRuleTemplatesForRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedApprovalRuleTemplatesForRepositoryResponse)
    Q_DISABLE_COPY(ListAssociatedApprovalRuleTemplatesForRepositoryResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
