// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBRANCHRESPONSE_H
#define QTAWS_GETBRANCHRESPONSE_H

#include "codecommitresponse.h"
#include "getbranchrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetBranchResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetBranchResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetBranchResponse(const GetBranchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBranchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBranchResponse)
    Q_DISABLE_COPY(GetBranchResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
