// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGECOMMITRESPONSE_H
#define QTAWS_GETMERGECOMMITRESPONSE_H

#include "codecommitresponse.h"
#include "getmergecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeCommitResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetMergeCommitResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetMergeCommitResponse(const GetMergeCommitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMergeCommitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMergeCommitResponse)
    Q_DISABLE_COPY(GetMergeCommitResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
