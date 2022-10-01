// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMERGECONFLICTSRESPONSE_H
#define QTAWS_DESCRIBEMERGECONFLICTSRESPONSE_H

#include "codecommitresponse.h"
#include "describemergeconflictsrequest.h"

namespace QtAws {
namespace CodeCommit {

class DescribeMergeConflictsResponsePrivate;

class QTAWSCODECOMMIT_EXPORT DescribeMergeConflictsResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    DescribeMergeConflictsResponse(const DescribeMergeConflictsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMergeConflictsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMergeConflictsResponse)
    Q_DISABLE_COPY(DescribeMergeConflictsResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
