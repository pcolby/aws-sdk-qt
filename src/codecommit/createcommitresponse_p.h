// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMMITRESPONSE_P_H
#define QTAWS_CREATECOMMITRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class CreateCommitResponse;

class CreateCommitResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit CreateCommitResponsePrivate(CreateCommitResponse * const q);

    void parseCreateCommitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCommitResponse)
    Q_DISABLE_COPY(CreateCommitResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
