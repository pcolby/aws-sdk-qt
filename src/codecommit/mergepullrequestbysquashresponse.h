// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYSQUASHRESPONSE_H
#define QTAWS_MERGEPULLREQUESTBYSQUASHRESPONSE_H

#include "codecommitresponse.h"
#include "mergepullrequestbysquashrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestBySquashResponsePrivate;

class QTAWSCODECOMMIT_EXPORT MergePullRequestBySquashResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    MergePullRequestBySquashResponse(const MergePullRequestBySquashRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergePullRequestBySquashRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergePullRequestBySquashResponse)
    Q_DISABLE_COPY(MergePullRequestBySquashResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
