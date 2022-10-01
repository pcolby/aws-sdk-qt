// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMERGECONFLICTSREQUEST_H
#define QTAWS_DESCRIBEMERGECONFLICTSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class DescribeMergeConflictsRequestPrivate;

class QTAWSCODECOMMIT_EXPORT DescribeMergeConflictsRequest : public CodeCommitRequest {

public:
    DescribeMergeConflictsRequest(const DescribeMergeConflictsRequest &other);
    DescribeMergeConflictsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMergeConflictsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
