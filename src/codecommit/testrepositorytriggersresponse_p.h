// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTREPOSITORYTRIGGERSRESPONSE_P_H
#define QTAWS_TESTREPOSITORYTRIGGERSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class TestRepositoryTriggersResponse;

class TestRepositoryTriggersResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit TestRepositoryTriggersResponsePrivate(TestRepositoryTriggersResponse * const q);

    void parseTestRepositoryTriggersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestRepositoryTriggersResponse)
    Q_DISABLE_COPY(TestRepositoryTriggersResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
