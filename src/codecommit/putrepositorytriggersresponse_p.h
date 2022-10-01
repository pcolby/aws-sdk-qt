// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYTRIGGERSRESPONSE_P_H
#define QTAWS_PUTREPOSITORYTRIGGERSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class PutRepositoryTriggersResponse;

class PutRepositoryTriggersResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit PutRepositoryTriggersResponsePrivate(PutRepositoryTriggersResponse * const q);

    void parsePutRepositoryTriggersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRepositoryTriggersResponse)
    Q_DISABLE_COPY(PutRepositoryTriggersResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
