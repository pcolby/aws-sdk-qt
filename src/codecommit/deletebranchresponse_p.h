// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBRANCHRESPONSE_P_H
#define QTAWS_DELETEBRANCHRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class DeleteBranchResponse;

class DeleteBranchResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit DeleteBranchResponsePrivate(DeleteBranchResponse * const q);

    void parseDeleteBranchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBranchResponse)
    Q_DISABLE_COPY(DeleteBranchResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
