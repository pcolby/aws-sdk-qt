// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTSFORCOMPAREDCOMMITRESPONSE_P_H
#define QTAWS_GETCOMMENTSFORCOMPAREDCOMMITRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentsForComparedCommitResponse;

class GetCommentsForComparedCommitResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetCommentsForComparedCommitResponsePrivate(GetCommentsForComparedCommitResponse * const q);

    void parseGetCommentsForComparedCommitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCommentsForComparedCommitResponse)
    Q_DISABLE_COPY(GetCommentsForComparedCommitResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
