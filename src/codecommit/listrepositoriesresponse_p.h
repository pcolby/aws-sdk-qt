// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESRESPONSE_P_H
#define QTAWS_LISTREPOSITORIESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class ListRepositoriesResponse;

class ListRepositoriesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit ListRepositoriesResponsePrivate(ListRepositoriesResponse * const q);

    void parseListRepositoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRepositoriesResponse)
    Q_DISABLE_COPY(ListRepositoriesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
