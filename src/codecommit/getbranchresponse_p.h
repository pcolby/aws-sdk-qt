// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBRANCHRESPONSE_P_H
#define QTAWS_GETBRANCHRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetBranchResponse;

class GetBranchResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetBranchResponsePrivate(GetBranchResponse * const q);

    void parseGetBranchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBranchResponse)
    Q_DISABLE_COPY(GetBranchResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
