// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMITRESPONSE_P_H
#define QTAWS_GETCOMMITRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetCommitResponse;

class GetCommitResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetCommitResponsePrivate(GetCommitResponse * const q);

    void parseGetCommitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCommitResponse)
    Q_DISABLE_COPY(GetCommitResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
