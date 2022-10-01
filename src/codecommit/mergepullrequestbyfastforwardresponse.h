// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYFASTFORWARDRESPONSE_H
#define QTAWS_MERGEPULLREQUESTBYFASTFORWARDRESPONSE_H

#include "codecommitresponse.h"
#include "mergepullrequestbyfastforwardrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestByFastForwardResponsePrivate;

class QTAWSCODECOMMIT_EXPORT MergePullRequestByFastForwardResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    MergePullRequestByFastForwardResponse(const MergePullRequestByFastForwardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergePullRequestByFastForwardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergePullRequestByFastForwardResponse)
    Q_DISABLE_COPY(MergePullRequestByFastForwardResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
