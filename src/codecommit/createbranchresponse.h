// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBRANCHRESPONSE_H
#define QTAWS_CREATEBRANCHRESPONSE_H

#include "codecommitresponse.h"
#include "createbranchrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateBranchResponsePrivate;

class QTAWSCODECOMMIT_EXPORT CreateBranchResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    CreateBranchResponse(const CreateBranchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBranchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBranchResponse)
    Q_DISABLE_COPY(CreateBranchResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
