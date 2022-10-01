// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBEMERGECONFLICTSREQUEST_H
#define QTAWS_BATCHDESCRIBEMERGECONFLICTSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchDescribeMergeConflictsRequestPrivate;

class QTAWSCODECOMMIT_EXPORT BatchDescribeMergeConflictsRequest : public CodeCommitRequest {

public:
    BatchDescribeMergeConflictsRequest(const BatchDescribeMergeConflictsRequest &other);
    BatchDescribeMergeConflictsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDescribeMergeConflictsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
