// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBEMERGECONFLICTSRESPONSE_H
#define QTAWS_BATCHDESCRIBEMERGECONFLICTSRESPONSE_H

#include "codecommitresponse.h"
#include "batchdescribemergeconflictsrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchDescribeMergeConflictsResponsePrivate;

class QTAWSCODECOMMIT_EXPORT BatchDescribeMergeConflictsResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    BatchDescribeMergeConflictsResponse(const BatchDescribeMergeConflictsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDescribeMergeConflictsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDescribeMergeConflictsResponse)
    Q_DISABLE_COPY(BatchDescribeMergeConflictsResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
