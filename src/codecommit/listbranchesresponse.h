// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBRANCHESRESPONSE_H
#define QTAWS_LISTBRANCHESRESPONSE_H

#include "codecommitresponse.h"
#include "listbranchesrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListBranchesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT ListBranchesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    ListBranchesResponse(const ListBranchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBranchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBranchesResponse)
    Q_DISABLE_COPY(ListBranchesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
