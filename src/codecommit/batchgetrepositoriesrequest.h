// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPOSITORIESREQUEST_H
#define QTAWS_BATCHGETREPOSITORIESREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchGetRepositoriesRequestPrivate;

class QTAWSCODECOMMIT_EXPORT BatchGetRepositoriesRequest : public CodeCommitRequest {

public:
    BatchGetRepositoriesRequest(const BatchGetRepositoriesRequest &other);
    BatchGetRepositoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetRepositoriesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
