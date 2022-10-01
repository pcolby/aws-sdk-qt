// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCOMMITSRESPONSE_H
#define QTAWS_BATCHGETCOMMITSRESPONSE_H

#include "codecommitresponse.h"
#include "batchgetcommitsrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchGetCommitsResponsePrivate;

class QTAWSCODECOMMIT_EXPORT BatchGetCommitsResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    BatchGetCommitsResponse(const BatchGetCommitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetCommitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetCommitsResponse)
    Q_DISABLE_COPY(BatchGetCommitsResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
