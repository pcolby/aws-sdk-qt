// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYTRIGGERSRESPONSE_P_H
#define QTAWS_GETREPOSITORYTRIGGERSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetRepositoryTriggersResponse;

class GetRepositoryTriggersResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetRepositoryTriggersResponsePrivate(GetRepositoryTriggersResponse * const q);

    void parseGetRepositoryTriggersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositoryTriggersResponse)
    Q_DISABLE_COPY(GetRepositoryTriggersResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
