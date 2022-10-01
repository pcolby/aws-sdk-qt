// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYRESPONSE_P_H
#define QTAWS_GETREPOSITORYRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetRepositoryResponse;

class GetRepositoryResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetRepositoryResponsePrivate(GetRepositoryResponse * const q);

    void parseGetRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositoryResponse)
    Q_DISABLE_COPY(GetRepositoryResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
