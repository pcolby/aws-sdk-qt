// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMMITRESPONSE_H
#define QTAWS_CREATECOMMITRESPONSE_H

#include "codecommitresponse.h"
#include "createcommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateCommitResponsePrivate;

class QTAWSCODECOMMIT_EXPORT CreateCommitResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    CreateCommitResponse(const CreateCommitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCommitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCommitResponse)
    Q_DISABLE_COPY(CreateCommitResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
