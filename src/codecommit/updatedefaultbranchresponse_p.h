// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEFAULTBRANCHRESPONSE_P_H
#define QTAWS_UPDATEDEFAULTBRANCHRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdateDefaultBranchResponse;

class UpdateDefaultBranchResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdateDefaultBranchResponsePrivate(UpdateDefaultBranchResponse * const q);

    void parseUpdateDefaultBranchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDefaultBranchResponse)
    Q_DISABLE_COPY(UpdateDefaultBranchResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
