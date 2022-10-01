// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPROVALRULETEMPLATESRESPONSE_H
#define QTAWS_LISTAPPROVALRULETEMPLATESRESPONSE_H

#include "codecommitresponse.h"
#include "listapprovalruletemplatesrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListApprovalRuleTemplatesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT ListApprovalRuleTemplatesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    ListApprovalRuleTemplatesResponse(const ListApprovalRuleTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApprovalRuleTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApprovalRuleTemplatesResponse)
    Q_DISABLE_COPY(ListApprovalRuleTemplatesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
