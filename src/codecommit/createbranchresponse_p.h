// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBRANCHRESPONSE_P_H
#define QTAWS_CREATEBRANCHRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class CreateBranchResponse;

class CreateBranchResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit CreateBranchResponsePrivate(CreateBranchResponse * const q);

    void parseCreateBranchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBranchResponse)
    Q_DISABLE_COPY(CreateBranchResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
