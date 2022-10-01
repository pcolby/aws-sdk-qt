// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUNREFERENCEDMERGECOMMITRESPONSE_H
#define QTAWS_CREATEUNREFERENCEDMERGECOMMITRESPONSE_H

#include "codecommitresponse.h"
#include "createunreferencedmergecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateUnreferencedMergeCommitResponsePrivate;

class QTAWSCODECOMMIT_EXPORT CreateUnreferencedMergeCommitResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    CreateUnreferencedMergeCommitResponse(const CreateUnreferencedMergeCommitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUnreferencedMergeCommitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUnreferencedMergeCommitResponse)
    Q_DISABLE_COPY(CreateUnreferencedMergeCommitResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
