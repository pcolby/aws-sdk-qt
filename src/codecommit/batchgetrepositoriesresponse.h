// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPOSITORIESRESPONSE_H
#define QTAWS_BATCHGETREPOSITORIESRESPONSE_H

#include "codecommitresponse.h"
#include "batchgetrepositoriesrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchGetRepositoriesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT BatchGetRepositoriesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    BatchGetRepositoriesResponse(const BatchGetRepositoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetRepositoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetRepositoriesResponse)
    Q_DISABLE_COPY(BatchGetRepositoriesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
