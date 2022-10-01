// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYNAMERESPONSE_P_H
#define QTAWS_UPDATEREPOSITORYNAMERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdateRepositoryNameResponse;

class UpdateRepositoryNameResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdateRepositoryNameResponsePrivate(UpdateRepositoryNameResponse * const q);

    void parseUpdateRepositoryNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRepositoryNameResponse)
    Q_DISABLE_COPY(UpdateRepositoryNameResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
