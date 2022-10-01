// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGECONFLICTSRESPONSE_H
#define QTAWS_GETMERGECONFLICTSRESPONSE_H

#include "codecommitresponse.h"
#include "getmergeconflictsrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeConflictsResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetMergeConflictsResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetMergeConflictsResponse(const GetMergeConflictsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMergeConflictsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMergeConflictsResponse)
    Q_DISABLE_COPY(GetMergeConflictsResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
