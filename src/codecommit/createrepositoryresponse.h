// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPOSITORYRESPONSE_H
#define QTAWS_CREATEREPOSITORYRESPONSE_H

#include "codecommitresponse.h"
#include "createrepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateRepositoryResponsePrivate;

class QTAWSCODECOMMIT_EXPORT CreateRepositoryResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    CreateRepositoryResponse(const CreateRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRepositoryResponse)
    Q_DISABLE_COPY(CreateRepositoryResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
