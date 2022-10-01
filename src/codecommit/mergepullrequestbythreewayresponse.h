// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYTHREEWAYRESPONSE_H
#define QTAWS_MERGEPULLREQUESTBYTHREEWAYRESPONSE_H

#include "codecommitresponse.h"
#include "mergepullrequestbythreewayrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestByThreeWayResponsePrivate;

class QTAWSCODECOMMIT_EXPORT MergePullRequestByThreeWayResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    MergePullRequestByThreeWayResponse(const MergePullRequestByThreeWayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergePullRequestByThreeWayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergePullRequestByThreeWayResponse)
    Q_DISABLE_COPY(MergePullRequestByThreeWayResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
